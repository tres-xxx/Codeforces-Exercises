//this code is the solution posted by MikeMirzayanov on Codeforces's contest 496 solution
#include <climits>
#include <queue>
#include <iostream>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<vector<int>> g(n);
    vector<int> a(m), b(m);
    for(int i = 0; i < m; i++){ //paths
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
        g[a[i]].push_back(b[i]); //path since a city that is possible to take
        g[b[i]].push_back(a[i]);
    }
    queue<int> q;
    q.push(0);
    vector<int> d(n, INT_MAX);
    d[0] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v: g[u]){
            if(d[v] == INT_MAX){
                d[v] = d[u]+1;
                q.push(v);
            }
        }
    }
    vector<vector<int>> inc(n);
    for(int i = 0; i < m; i++){
        if(d[a[i]]+1 == d[b[i]]){
            inc[b[i]].push_back(i);
        }
        if(d[b[i]]+1 == d[a[i]]){
            inc[a[i]].push_back(i);
        }
    }
    vector<int> f(n);
    vector<string> result;
    for(int i = 0; i < k; i++){
        string s(m,'0');
        for(int j = 1; j < n; j++){
            s[inc[j][f[j]]] = '1';
        }
        result.push_back(s);
        bool ok = false;
        for(int j = 1; j < n; j++){
            if(f[j]+1 < inc[j].size()){
                ok = true;
                f[j]++;
                break;
            }
            else{
                f[j] = 0;
            }
        }
        if(!ok){
            break;
        }
    }
    cout << result.size() << endl;
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
    return 0;
}
