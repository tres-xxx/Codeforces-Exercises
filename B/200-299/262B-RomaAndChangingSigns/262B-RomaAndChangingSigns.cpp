#include <math.h>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    int min_q = 10000;
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(k > 0 && temp < 0){
            temp = temp*(-1);
            k--;
        }
        sum += temp;
        min_q = min(min_q,temp);
    }
    if(k%2 == 0){
        cout << sum << endl;
    }
    else{
        cout << sum-(2*min_q) << endl;
    }
    return 0;
}
