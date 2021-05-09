#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long long n [100000];
    int amn, exist = 1;
    cin >> amn;
    for(int i = 0; i < amn; i++) cin >> n[i];
    sort(n,n+amn);  
    for(int i = 0, j = amn/3, k = (amn/3)*2; k < amn && exist == 1; i++, j++, k++){
        if(n[i] >= n [j] || n [j] >= n [k]) exist = 0;
        else{
            if(n[j] % n[i] != 0 || n[k] % n[j] != 0){
                exist = 0;
            }
        }
        /*cout << n[i] << " " << n[j] << " " << n[k] << endl;
        cout << n[j] % n[i] << endl;
        cout << n[k] % n[j] << endl;*/
    }
    if(exist == 0) cout << "-1";
    else{
        for(int i = 0, j = amn/3, k = (amn/3)*2; k < amn; i++, j++, k++){
            cout << n[i] << " " << n[j] << " " << n[k] << endl;
        }
    }
    return 0;
}