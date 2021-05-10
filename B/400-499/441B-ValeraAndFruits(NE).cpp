#include <algorithm>
#include <vector>
#include <utility>
#include <iostream>
using namespace std;

int main(){
    long long n,v,max = 0,vmore;
    cin >> n >> v;
    vector<pair<int,int>> garden;
    for(int i = 0; i < n; i++){
        int t,f;
        cin >> t >> f;
        garden.push_back(make_pair(t,f));
    }
    sort(garden.begin(), garden.end());
    if(garden[0].second > v){
        garden[0].second -= v;
        max += v;
    }
    else{
        max += garden[0].second;
        garden[0].second = 0;
    }
    for(int i = 1; i <= n; i++){
        vmore = 0;
        if(garden[i-1].second > 0){
            if(garden[i-1].second > v){
                max += v;
            }
            else{
                vmore = garden[i-1].second;
                if(garden[i].second > 0 && i < n){
                    if(garden[i].second > (v-vmore)){
                        garden[i].second -= (v-vmore);
                        vmore = v;
                    }
                    else{
                        vmore += garden[i].second;
                        garden[i].second = 0;
                    }
                }
                max += vmore;
            }
        }
    }
    cout << max << endl;
    return 0;
}
