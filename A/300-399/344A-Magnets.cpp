#include <iostream>
using namespace std;

int main(){
    long n;
    cin >> n;
    short magnet;
    long group = 0;
    short position = -1; //0 == 10 || 1 == 01
    short position_t;
    while(n--){
        cin >> magnet;
        if(magnet == 10){
            position_t = 0;
        }
        else{
            position_t = 1;
        }
        if(position != position_t){
            position = position_t;
            group++;
        }
    }
    cout << group << endl;
    return 0;
}
