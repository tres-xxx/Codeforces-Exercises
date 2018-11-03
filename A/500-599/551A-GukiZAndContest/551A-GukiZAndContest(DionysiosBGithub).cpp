//this code has been wrote by DionysiosB and posted on github.com
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int> > cont(n, pair<int, int>(0,0));
    for(int i = 0; i < n; i++){
        int score;
        cin >> score;
        cont[i] = pair<int, int>(score,i);
    }
    sort(cont.begin(), cont.end());
    int score = 0, lastRank = 1;
    vector<int > rank(n, 0);
    for(int i = n-1; i >= 0; i--){
        int pos = cont[i].second;
        if(cont[i].first < score){
            rank[pos] = n-i;
        }
        else{
            rank[pos] = lastRank;
        }
        lastRank = rank[pos];
        score = cont[i].first;
    }
    cout << rank[0];
    for(int i = 1; i < n; i++){
        cout << " " << rank[i];
    }
    cout << endl;
    return 0;
}
