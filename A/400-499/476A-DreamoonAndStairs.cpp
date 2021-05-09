#include <iostream>
using namespace std;

int main(){
    long n,m;
    cin >> n >> m;
    if(n==0) cout << "0";
    else{
        if(n<m) cout << "-1";
        else{
            long temp_div; //minimal amount of steps;
            if(n%2==0) temp_div=n/2;
            else temp_div=(n/2)+1;
            while(temp_div%m!=0) temp_div++;
            cout << temp_div;
        }
    }
    return 0;
}