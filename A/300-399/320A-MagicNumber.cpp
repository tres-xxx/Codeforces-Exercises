#include <iostream>
using namespace std;

int main(){
    long n;
    cin >> n;
    short magic = 1;
    short temp=0,temp1 = 0;
    for(;magic == 1 && n>0; ){
        short which = n % 10;
        if(which != 4 && which != 1) magic = 0;
        else{
            if(which == 4){
                if(temp == 0) temp = 4;
                else{
                    if(temp1 == 0) temp1 = 4;
                    else magic = 0;
                }
            }
            else temp = temp1 = 0;
        }
        n /= 10;
    }
    
    if(magic == 1 && temp == 0) cout << "YES";
    else cout << "NO";
    return 0;
}