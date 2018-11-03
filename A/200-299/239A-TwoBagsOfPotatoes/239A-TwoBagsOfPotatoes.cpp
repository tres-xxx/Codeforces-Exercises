#include <iostream>
using namespace std;

int main(){
    long y,k,n;
    cin >> y >> k >> n;
    if(y<n){
        //if(n%k==0){
            int divisible = y%k;
            if(divisible == 0) divisible=k;
            else divisible = k-divisible;
            int sum = divisible+y;
            if(sum<=n){
                while(sum<=n){
                    cout << divisible <<" ";
                    divisible+=k;
                    sum+=k;
                }
            }
            else cout << "-1";
        //}
        //else cout << "-1";
    }
    else cout << "-1";
    return 0;
}