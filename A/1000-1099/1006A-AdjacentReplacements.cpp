#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int *ai = new long long int[n];
    for(int i = 0; i < n; i++){
        cin >> ai[i];
        if(ai[i]%2 == 0){
            ai[i]--;
        }
    }
    cout << ai[0];
    for(int i = 1; i < n; i++){
        cout << " " << ai[i];
    }
    cout << endl;
    return 0;
}
