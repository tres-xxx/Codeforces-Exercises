#include <math.h>
#include <iostream>
using namespace std;

int main(){
    double n,m,a,b;
    long min=0;
    cin>>n>>m>>a>>b;
    double ticketm = b/m;
    cout << ticketm << endl;
    if(ticketm<a){
        int timesb = (int)floor(n/m);
        min += (timesb*b);
        cout << min << endl;
        timesb*=m;
        if(timesb<n){
            int temp=a*(n-timesb);
            if(temp<b) min+=temp;
            else min+=b;
        }
    }
    else{
        min = (int)a*n;
    }
    cout << min;
    cout << 1000*1000;
    return 0;
}
