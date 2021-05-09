#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *ai = new int [n];
    int t = 0;
    int *ti = new int [n];
    for(int i = 0; i < n; i++){
        cin >> ai[i];
        if(ai[i] == 1){
            t++;
            if(t > 1){
                ti[t-2] = ai[i-1];
            }
        }
    }
    ti[t-1] = ai[n-1];
    cout << t << endl;
    for(int i = 0; i < t; i++){
        cout << ti[i] << " ";
    }
    cout << endl;
    return 0;
}
