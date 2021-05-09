//this code has been found in the next link https ://blog.csdn.net/yzllz001/article/details/54999506

#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    string aS,bS;
    long long a,b;
    cin >> aS >> bS;
    a = aS.length();
    b = bS.length();
    if(a == b){
        long long i;
        for(i = 0; i < a; i++){
            if(aS[i] != bS[i]){
                cout << a;
                break;
            }
        }
        if(i == a) cout << "-1";
    }
    else{
        cout << max(a,b);
    }
    cout << endl;
    return 0;
}
