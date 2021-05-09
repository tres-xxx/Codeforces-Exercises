#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 0,s_e=1; i < n; i++){
        for(int j=0; j < m; j++){
            if(i % 2 == 0) cout << "#";
            else{
                if((s_e==1) && (j==m-1)){
                    cout << "#";
                } 
                else{
                    if((j==0) && (s_e==0)){
                        cout << "#";
                    }
                    else cout << ".";
                }
            }
        }
        if(i%2==1){
            if(s_e==1)s_e=0;
            else s_e=1;
        }
        cout << endl;
    }
    return 0;
}