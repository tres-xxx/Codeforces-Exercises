#include <iostream>
using namespace std;

int main(){
    int n,h;
    cin >> n >> h;
    int width_road = 0;
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp > h){
            width_road+=2;
        }
        else{
            width_road++;
        }
    }
    cout << width_road << endl;
    return 0;
}
