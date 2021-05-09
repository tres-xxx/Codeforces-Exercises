#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n, S = 0;
    cin >> n;
    int *ai = new int[n];
    for(int i = 0; i < n; i++){
        cin >> ai[i];
    }
    sort(ai,ai+n);
    for(int i = 0; i < n-1 && ai[i] != ai[n-1]; i++){
        S += (ai[n-1]-ai[i]);
    }
    cout << S << endl;
    return 0;
};
