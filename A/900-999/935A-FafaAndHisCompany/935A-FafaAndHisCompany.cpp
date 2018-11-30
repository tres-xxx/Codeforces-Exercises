#include <iostream>
using namespace std;

int main(){
    int n, amount=1;
    cin >> n;
    for(int i = 2; i <= (n/2) ;i++){
        if((n-i)%i == 0)
            amount++;
    }
    cout << amount << endl;
    return 0;
}
