#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    if(n%2 == 0){
        cout << n/2 << endl;
    }
    else{
        cout << ((n/2)+1)*(-1) << endl;
    }
    return 0;
};

/**
1 = -1
2 = 1
3 = -2
4 = 2
5 = -3
6 = 3
7 = -4
8 = 4
...
*/
