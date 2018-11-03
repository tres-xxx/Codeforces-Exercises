//This solution has been posted by Waqar-107 on Github.com
#include <iostream>
using namespace std;

int main(){
    long long n,m;
    long long x=2, y=1;
    cin >> n >> m;
    while(y<n){
        if(x>m){ //this avoid giant number exponentiations knowing already the result
            cout << m << endl; //a smaller number => module equals to the number
            return 0;
        }
        x *= 2;
        y++;
    }
    cout << m%x << endl;
    return 0;
}
