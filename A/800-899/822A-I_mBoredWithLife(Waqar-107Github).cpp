//this code has been posted by Waqar-107 on Github
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long long int a,b,maxgcd,mingcd;
    cin >> a >> b;
    mingcd = min(a,b);
    maxgcd = 1;
    //all factorial numbers are common divisors
    while(mingcd > 1){
        maxgcd *= mingcd;
        mingcd--;
    }
    cout << maxgcd << endl;
    return 0;
}
