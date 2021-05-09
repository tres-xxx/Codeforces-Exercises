#include <iostream>
using namespace std;

int main(){
    long n,k;
    cin >>n >>k;
    int y=0;
    for(long i = 0; i<n; i++){
        int temp;
        cin >> temp;
        if((5-temp)>=k) y++;
    }
    cout << y/3;
    return 0;
}