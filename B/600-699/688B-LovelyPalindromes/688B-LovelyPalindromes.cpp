#include <string>
#include <iostream>
using namespace std;

int main(){
    string n;
    cin >> n;
    long long int t = 0;
    //int odd = 0;
    //int p_odd = 0;
    /*while(t != n.size()){
        if((n[t]-48)%2 == 1){
            if(!odd){
                odd = 1;
            }
            else{
                if(!p_odd){
                    odd = 0;
                }
                else{
                    p_odd = 1;
                }
            }
        }
        t++;
    }*/
    t = n.size();
    cout << n;
    t--;
    for(;t >= 0; t--){
        cout << n[t];
    }
    cout << endl;
    return 0;
}
