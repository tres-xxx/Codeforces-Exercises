#include <iostream>
using namespace std;

int main(){
    int n, out=1,check;
    cin >> n;
    int a[1001]={0};
    
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        a[temp]++;
    }
    if(n >= 2){
        if(n%2==0) check = n/2;
        else check = (n/2)+1;
        for(int i = 0; i < 1001 && out == 1; i++){
            if(a[i] > check) out = 0;
        }
    }
    if(out == 1) cout << "YES";
    else cout << "NO";
    return 0;
}