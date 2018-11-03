#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long maxL = 0, tmax = 0;
    long long ai=0, aip;
    for(long long i = 0; i < n; i++){
        cin >> aip;
        if(aip <= ai){
            if(maxL < tmax){
                maxL = tmax;
            }
            tmax = 1;
        }
        else{
            tmax++;          
        }
        ai = aip;
    }
    if(tmax > maxL) maxL = tmax;
    cout << maxL << endl;
    return 0;
}
