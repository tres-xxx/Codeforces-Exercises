#include <iostream>
using namespace std;

int main(){
    long long int n,m;
    cin >> n >> m;
    long long int *ai = new long long int [n];
    for(long long int i = 0; i < n; i++) cin >> ai[i];
    long long int t_sum = 0;
    for(long long int i = 0; i < m; i++){
        long long int t;
        cin >> t;
        if(t == 1){
            long long int p;
            cin >> p >> t;
            p--;
            ai[p] = t-t_sum;
        }
        else{
            if(t == 2){
                cin >> t;
                t_sum += t;
            }
            else{
                cin >> t;
                cout << ai[t-1] + t_sum << endl;
            }
        }
    }
    return 0;
}
