#include <iostream>
using namespace std;

int main(){
    long long x;
    cin >> x;
    long steps = (x/5);
    if(x%5 != 0){
        steps++;
    }
    cout << steps << endl;
    return 0;
};
