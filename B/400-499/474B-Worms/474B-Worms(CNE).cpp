#include <iostream>
using namespace std;

int main(){
    long long n, m;
    long long ai[100001];
    long long qi[100000];
    cin >> n;
    ai[0] = 0;
    for(long i = 1; i <= n; i++){
        cin >> ai[i];
        ai[i] = ai[i] + ai[i-1];
    }
    cin >> m;
    for(long i = 0; i < m; i++){
        cin >> qi[i];
    }
    for(long i = 0; i < m; i++){
        for(long j = 1; j <= n; j++){
            if(qi[i] <= ai[j]){
                cout << j << endl;
                break;
            }
        }
    }
    return 0;
}
