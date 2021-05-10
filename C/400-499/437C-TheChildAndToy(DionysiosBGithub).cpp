//code writed by DionysiosB and posted on Github
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<long> energyVec(n+1);
    for(int i = 1; i <= n; i++){
        cin >> energyVec[i];
    }
    long total = 0;
    int a,b;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        total += (energyVec[a] < energyVec[b]) ? energyVec[a] : energyVec[b];
    }
    cout << total << endl;
    return 0;
};

