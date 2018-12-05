#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n,minStolen=0;
    cin >> n;
    int ai[n];
    for(int i = 0; i < n; i++) cin >> ai[i];
    sort(ai, ai+n);
    for(int i = 1; i < n; i++) minStolen += (ai[i]-(ai[i-1]+1));
    cout << minStolen << endl;
    return 0;
}
