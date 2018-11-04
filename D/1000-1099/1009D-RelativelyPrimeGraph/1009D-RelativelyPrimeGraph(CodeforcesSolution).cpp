//Code posted on Codeforces's Educational Contest solution (author PikMike)
#include <numeric>
#include <utility>
#include <iostream>
using namespace std;

#define forn(i,n) for(int i = 0; i < int(n); i++)

const int N = 100000; //the top
pair<int, int> ans[N];

int main(){
    int n,m;
    cin >> n >> m;
    if(m < n-1){
        cout << "Impossible" << endl;
    }
    else{
        int cur = 0;
        forn(i, n){
            for(int j = i+1; j < n; j++){
                if(cur == m){
                    break;
                }
                if(gcd(i+1, j+1) == 1){
                    ans[cur++] = make_pair(j, i);
                }
            }
        }
        if(cur != m){
            cout << "Impossible" << endl;
        }
        else{
            cout << "Possible" << endl;
            forn(i,m){
                cout << ans[i].first+1 << " " << ans[i].second+1 << endl;
            }
        }

    }
    return 0;
}
