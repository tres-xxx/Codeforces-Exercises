#include <iostream>
using namespace std;

int main(){
    long n;
    cin >> n;
    cout << n;
    for(long i=n+1;i<(n*2);i++) cout << " " << i;
    return 0;
}