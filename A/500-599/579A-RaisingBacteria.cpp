#include <iostream>
using namespace std;

int main(){
    int x, bacteria = 0, x_bact = 1, bacteria_n = 1,total=1;
    cin >> x;
    while(total != x){
        if(total > x){
            x_bact++;
            bacteria += (bacteria_n/2);
            bacteria_n = 1;
        }
        else{
            bacteria_n *= 2;
        }
        total = bacteria_n + bacteria;
    }
    cout << x_bact << endl;
    return 0;
}
