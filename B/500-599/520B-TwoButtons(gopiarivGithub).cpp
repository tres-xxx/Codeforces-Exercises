//code posted by gopiariv on Github
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int noOfClicks = 0;
    if(m < n){
        cout << n-m << endl;
        return 0;
    }
    else{
        while(n<m){
            if(m%2 == 0){
                m/=2;
            }
            else{
                m++;
            }
            noOfClicks++;
        }
        cout << abs(noOfClicks+n-m) << endl;
    }
    return 0;
}
