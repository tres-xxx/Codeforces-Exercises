#include <iostream>
using namespace std;

#include <algorithm>

int main(){
    int n,m;
    cin >> n >> m;
    
    long tv[n];
    
    for(int i = 0; i < n; i++) cin >> tv[i];
    
    sort(tv, tv + n);
    //for(int i = 0; i < n; i++) cout << tv[i];
    n = 0;//n is now equals to sale
    
    //cout << n;
    
    /*for(int i = 0; i < m; i++){
        if(tv[i] < 0) n = n + (tv[i]*(-1));
        else n = n - tv[i];
    }*/
    
    for(int i = 0; i < m; i++){
        if(tv[i] < 0) n = n + (tv[i]*(-1));
        else i = m;
    }
    
    cout << n;
    
    return 0;
}