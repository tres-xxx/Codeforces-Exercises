#include <iostream>
using namespace std;

int main(){
    long n, x, y;
    cin >> n >> x >> y;
    long min_percent = (x*100)/n;
    long gnomes = 1;
    for(; min_percent < y; gnomes++){
        min_percent = ((x+gnomes)*100)/n;
    }
    cout << gnomes-1 << endl;
    return 0;
}
