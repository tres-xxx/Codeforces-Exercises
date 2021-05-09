#include <iostream>
using namespace std;

int main(){
    int n,d,cities=2,distance;
    cin >> n >> d;
    int *xi = new int[n];
    cin >> xi[0];
    for(int i = 1; i < n; i++){
        cin >> xi[i];
        distance = xi[i]-xi[i-1];
        if(distance>=(d*2)){
            if(distance==(d*2)){
                cities++;
            }
            else{
                cities+=2;
            }
        }
    }
    cout << cities << endl;
    return 0;
}
