//this solution has been posted by DionysiosB on github.com
#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

bool pairCompare(pair<long, long> a, pair<long, long> b){
    return (a.first < b.first) || (a.first == b.first && a.second < b.second);
}

int main(){
    long n;
    cin >> n;
    vector< pair<long, long>> ai(n);
    for(long i = 0; i < n; i++){
        long x,y;
        cin >> x >> y;
        ai[i] = pair<long, long>(x,y);
    }

    sort(ai.begin(), ai.end(), pairCompare);

    long minDate = 0;
    
    for(long i = 0; i < n; i++){
        if(minDate <= ai[i].second){
            minDate = ai[i].second;
        }
        else{
            minDate = ai[i].first;
        }
    }
    
    cout << minDate << endl;

    return 0;
}
