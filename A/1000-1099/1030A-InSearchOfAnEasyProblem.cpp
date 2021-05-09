#include <iostream>
using namespace std;

int main(){
    int n; bool p = false;
    cin >> n;
    while(n--){
        short t; cin >> t;
        if(t == 1 && p == false) p = true;
    }
    if(p)
        cout << "HARD";
    else
        cout << "EASY";
    cout << endl;
    return 0;
}
