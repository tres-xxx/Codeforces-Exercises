//code writed by MikeMirzayanov on Codeforces's solution contest 496
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    map<int,int> c;
    c[0] = 1;
    bool has = false;
    int sum = 0;
    long long ans = 0;
    for(int r = 0; r < n; r++){
        if(p[r] < m){
            sum--;
        }
        else{
            if(p[r] > m){
                sum++;
            }
        }
        if(p[r] == m){
            has = true;
        }
        if(has){
            ans += (c[sum] + c[sum-1]);
        }
        else{
            c[sum]++;
        }
    }
    cout << ans << endl;
    return 0;
}
