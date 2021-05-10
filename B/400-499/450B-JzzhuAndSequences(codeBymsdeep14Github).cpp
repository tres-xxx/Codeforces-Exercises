//based on code posted by msdeep14 GitHub

#include <iostream>
using namespace std;

#define mod 1000000007

int main(){
    long long x,y,n;
    cin >> x >> y >> n;
    long long array[7];
    array[1]=(x+mod)%mod;
    array[2]=(y+mod)%mod;
    array[3]=(y-x+mod)%mod;
    array[4]=(-x+mod)%mod;
    array[5]=(-y+mod)%mod;
    array[6]=(x-y+mod)%mod;
    if(n<=6){
        cout << (array[n]+mod)%mod;
    }
    else{
        long long z = n%6; //why?
        if(z == 0){
            cout << (array[6]+mod)%mod;
        }
        else{
            cout << (array[z]+mod)%mod;
        }
    }
    return 0;
}