#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int npi[n];
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        temp--;
        npi[temp] = i+1;
    }
    cout << npi[0];
    for(int i = 1; i < n; i++) cout << " " << npi[i];
    
    return 0;
}