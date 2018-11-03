#include <iostream>
using namespace std;

int main(){
    int n,m, minor;
    cin >> n >> m;
    
    if(n >= m) minor = m;
    else minor = n;
    
    if(minor%2==0) cout << "Malvika";
    else cout << "Akshat";
    
    return 0;
}