//this code has beed written by DionysiosB and posted on Github
#include <iostream>
using namespace std;

int main(){
    int k,d;
    cin >> k >> d;
    if(k == 0 || (d == 0 && k > 1)){
        cout << "No solution" << endl;
    }
    else{
        cout << d;
        for(int i = 1; i < k; i++){
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}
