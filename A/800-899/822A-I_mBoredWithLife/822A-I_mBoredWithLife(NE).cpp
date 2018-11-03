#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long long int a,b,af=1,bf=1,minn;
    cin >> a >> b;
    for(int i = 2; i <= a || i <= b; i++){
        if(i <= a){
            af = af*i;
        }
        if(i <= b){
            bf = bf*i;
        }
    }
    minn = min(af,bf);
    while(minn > 0){
        if(af%minn == 0 && bf%minn == 0){
            break;
        }
        else{
            minn--;
        }
    }
    cout << minn << endl;
    return 0;
}
