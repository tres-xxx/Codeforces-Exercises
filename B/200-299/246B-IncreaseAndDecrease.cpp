#include <iostream>
using namespace std;

int main(){
    int n,max=0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        max+=t;
    }
    if(max%2==0) cout << n;
    else cout << n-1;
    return 0;
}