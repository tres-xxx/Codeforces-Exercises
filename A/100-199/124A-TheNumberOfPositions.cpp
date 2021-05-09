#include <iostream>
using namespace std;

#include <algorithm>

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int position = min(n-a,b+1);
    cout << position;
    
    return 0;
}