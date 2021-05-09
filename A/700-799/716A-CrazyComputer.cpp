#include <iostream>
using namespace std;

int main(){
    int n,c,count=0;
    cin >> n >> c;
    int pWord=0,nowWord;
    for(int i = 0; i < n; i++){
        cin >> nowWord;
        if((nowWord-pWord) <= c){
            count++;
        }
        else{
            count=1;        
        }
        pWord=nowWord;
    }
    cout << count << endl;
    return 0;
}
