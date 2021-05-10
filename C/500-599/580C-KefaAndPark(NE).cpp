#include <utility>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long long n,m,r=0;
    cin >> n >> m;
    pair<long long, pair<bool,bool>> ai[n+1];
    for(long long i = 1; i <= n; i++){
        cin >> ai[i].first;
        ai[i].second.first = false; //father?
        ai[i].second.second = false; // activated?
    }
    vector<pair<long long, long long>> xy;
    for(long long i = 0; i < n-1; i++){
        long long x, y;
        cin >> x >> y;
        if(x > y){
            long long t = x;
            x = y;
            y = t;
        }
        xy.push_back(make_pair(x,y));
    }
    sort(xy.begin(), xy.end());
    for(long long i = 0; i < n-1; i++){
        long long x,y;
        x = xy[i].first;
        y = xy[i].second;
        if(ai[y].second.second){
            ai[y].second.first = true;
            ai[x].second.second = true;
            long long t = x;
            x = y;
            y = t;
        }
        else{
            ai[x].second.first = true;
            ai[x].second.second = true;
            ai[y].second.second = true;
        }
        if(ai[x].first > m){
            ai[y].first = ai[x].first;
        }
        else{
            if(ai[y].first == 1){
                ai[y].first += ai[x].first;           
            }
        }
    }
    for(long long i = 1; i <= n; i++){
        if(ai[i].second.first == false && ai[i].first <= m){
            r++;
        }
    }
    cout << r << endl;
    return 0;
}
