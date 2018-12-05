#include <iostream>
using namespace std;

int main(){
    int n, minB=0,t;
    cin >> n;
    int ai[102]={};
    for(int i = 0; i < n; i++){
        cin >> t;
        ai[t]++;
        if(ai[t] > minB) minB = ai[t];
    }
    cout << minB << endl;
    return 0;
}
