#include <string>
#include <iostream>
using namespace std;

int main(){
    string n;
    cin >> n;
    for(int i = n.size()-1; i >= 0; i--){
        int t = n[i]-48;
        int k = t%5;
        //cout << (t>4) ? "-O|" : "O-|";
        if(t>4)
            cout << "-O|";
        else
            cout << "O-|";
        for(int j = 1; j <= 5; j++){
            if(j <= k){
                cout << "O";
            }
            else{
                cout << "-";
                k = 5;
            }
        }
        cout << endl;
    }
    return 0;
}
