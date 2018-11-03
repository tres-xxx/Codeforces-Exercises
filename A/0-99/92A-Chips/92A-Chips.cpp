#include <iostream>
using namespace std;

int main(){
    long n,m;
    cin >> n >> m;
    long total_circle = 0;
    for(int i = 1; i <= n; i++){
        total_circle += i;
    }
    long position = m % total_circle;
    if(position == 0){
        cout << "0" << endl;
    }
    else{ 
        int takes_chip = 1;
        int i = 2;
        for(; takes_chip <= position; i++){
            takes_chip+=i;
        }
        cout << position - (takes_chip - (i - 1)) << endl;
    }
    return 0;
}
