#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int *ai = new int [n];
    int changes = 0;
    cin >> ai[0];
    for(int i = 1; i < n; i++){
        cin >> ai[i];
        int t = ai[i] + ai[i-1];
        if(t < k){
            t = k-t;
            ai[i]+=t;
            changes+=t;
        }
    }
    cout << changes << endl;
    cout << ai[0];
    for(int i = 1; i < n; i++){
        cout << " " << ai[i];
    }
    cout << endl;
    return 0;
}
