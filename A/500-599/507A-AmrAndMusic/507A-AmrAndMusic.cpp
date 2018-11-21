#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long long n,k,learn=0,t;
    cin >> n >> k;
    pair<int,int> ai[n+1];
    for(int i = 0; i < n; i++){ 
        cin >> t; ai[i].first = t; 
        ai[i].second = i+1;
    }
    sort(ai, ai + n);
    t = 0;
    for(int i = 0; (learn += ai[i].first) <= k && i < n; i++)
        t++;
    if(t == 0){
        cout << "0" << endl;
        return 0;
    }
    cout << t << endl;
    cout << ai[0].second;
    for(int i = 1; i < t; i++)
        cout << " " << ai[i].second;
    cout << endl;
    return 0;
}
