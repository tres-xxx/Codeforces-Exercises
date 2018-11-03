#include <string>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    long long int index1f=-1,index2f=-1,index0f=-1;
    long long int index1l=-1,index2l=-1,index0l=-1;        
    /*for(int i = 0; i < s.size()-1; i++){
        /*if(s[i+1] == s[i]){
            if(s[i] == '1' && index1 == -1){
                index1 = i;
            }
            else{
                if(index2 == -1){
                    index2 = i;
                }
            }
        }
        else{
            if(s[i] == '1' && s[i+1] == '0'){
                s[index1] = 
            }
        }
        if(s[i] == '1'){
            if(index1f == -1){
                index1f = i;
            }
            index1l = i;
        }
        if(s[i] == '2'){
            if(index2f == -1){
                index2f = i;
            }
            index2l = i;
        }
        if(s[i] == '1' && s[i+1] == '0'){
            if(index2l == -1){
                s[indexf1] = 
            }
        }
    }*/
    for(int i = 1; i < s.size(); i++){
        for(int j = i; j > 0; j--){
            char temp;
            if((s[j] == '0' && s[j-1] == '1') || (s[j] == '1' && s[j-1] == '2')){
                temp = s[j-1];
                s[j-1] = s[j];
                s[j] = temp;
            }
            else{
                if((s[j] == '0' && s[j-1] == '2') || (s[j] == '2' && s[j-1] == '0')){   
                    break;
                }
            }
        }
    }
    cout << s << endl;
    return 0;
}
