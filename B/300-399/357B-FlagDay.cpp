#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int di[n] = {0};
    bool r,w;
    int t[3];
    for(int i = 0; i < m; i++){
        r = w = false;
        cin >> t[0] >> t[1] >> t[2];
        t[0]--; t[1]--; t[2]--;
        for(int j = 0; j < 3; j++){
            if(di[t[j]] != 0){
                if(di[t[j]] == 1){r = true;}
                else{if(di[t[j]] == 2){w = true;}}    
            }
        }
        for(int j = 0; j < 3; j++){
            if(di[t[j]] == 0){
                if(!r){di[t[j]] = 1;r = true;}
                else{if(!w){di[t[j]] = 2;w = true;}
                    else{di[t[j]] = 3;}
                }    
            }
        }
    }
    cout << di[0];
    for(int i = 1; i < n; i++){
        cout << " " << di[i]; 
    }
    cout << endl;
    return 0;
}
