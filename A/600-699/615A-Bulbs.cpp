#include <iostream>
using namespace std;

int main(){
    int n,m,bu,t;
    cin >> n >> m;
    int b[m+1]={};
    for(int i = 0; i < n; i++){
        cin >> bu;
        for(int j = 0; j < bu; j++){
            cin >> t;
            b[t] = 1;
        }
    }
    bool allOn = true;
    for(int i = 1; i <= m; i++){
        if(b[i] == 0){
            allOn = false;
            break;
        }
    }
    if(allOn) cout << "YES";
    else cout << "NO";
    cout << endl;    
    return 0;
}
