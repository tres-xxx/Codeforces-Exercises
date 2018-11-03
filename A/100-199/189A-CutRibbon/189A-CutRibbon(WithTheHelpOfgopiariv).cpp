#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n,a,b,c;
    int pieces = 0;
    cin >> n >> a >> b >> c;
    for(int i = 0,t_i = i*a; t_i <= n; i++){
        t_i = i*a;
        for(int j = 0,t_j = j*b; t_j + t_i <= n; j++){
            t_j = j*b;
            int k = (n - t_i - t_j)/c; //One cycle less -- 'exact' value
            //finding the Integer value just with a division
            if((t_i + t_j + k*c) == n){
                pieces = max(i+j+k,pieces);
            }
            //cout << j << " " << t_j << endl;
        }
        //cout << i;
    }
    cout << pieces;
    return 0;
}