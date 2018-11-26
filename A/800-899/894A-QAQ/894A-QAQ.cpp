//based on the solution posted by kantuni on github.com
#include <string>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int f,l;
    f = l = -1;
    for(int i = 0,j = s.size()-1;(f == -1 || l == -1) && i < s.size();){
        if(s[i] == 'Q' && f == -1) f = i;
        if(s[j] == 'Q' && l == -1) l = j;
        i++;j--;
    }
    int sub = 0;
    if(f == -1  && l == -1){
        cout << sub << endl;
        return 0;
    }    
    for(int i = f; i <= l; i++){
        if(s[i] == 'Q'){
            for(int j = i+1; j <=l; j++){
                if(s[j] == 'A'){
                    for(int k = j+1;k <= l; k++){
                        if(s[k] == 'Q') sub++;
                    }
                }
            }
        }
    }
    cout << sub << endl;
    return 0;
}
