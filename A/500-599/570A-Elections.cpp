#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int candidate[n] = {};
    int best_c = 0;
    for(int i = 0; i < m; i++){
        int i_c = 0;
        int t_c = 0; 
        for(int j = 0; j < n; j++){
            int t;
            cin >> t;
            if(t > t_c){
                t_c = t;
                i_c = j;
            }
        }
        candidate[i_c]++;
        if(candidate[i_c] > best_c){
            best_c = candidate[i_c];
        }
    }
    int pos_c;
    for(int i = 0; i < n; i++){
        if(candidate[i] == best_c){
            pos_c = i;
            break;
        }
    }
    cout << pos_c + 1 << endl;
    return 0;
}
