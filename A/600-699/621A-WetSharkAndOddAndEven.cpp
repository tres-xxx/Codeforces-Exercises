#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n; 
    long long int even = 0, odd = 0;
    int amount_odd = 0;
    cin >> n;
    long long int *n_integer = new long long int [n];
    for(int i = 0; i < n; i++){
        cin >> n_integer[i];
    }
    sort(n_integer, n_integer + n);
    for(int i = n-1; i >= 0; i--){
        if(n_integer[i]%2 == 0){
            even += n_integer[i];
        }
        else{
            if(amount_odd == 2){
                even += odd;
                odd = 0;
                amount_odd = 0;
            }
            odd += n_integer[i];
            amount_odd++;
        }
    }
    if(amount_odd == 2){
        even += odd;
    }
    cout << even << endl;
    return 0;
}
