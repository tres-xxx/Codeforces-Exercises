#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char *original = new char[n], *combination = new char[n];
    cin >> original >> combination;
    int minimumMoves = 0;
    int b,s;
    for(int i = 0; i < n; i++){
        if(original[i] > combination[i]){
            b = original[i] - 48;
            s = combination[i] - 48;
        }
        else{
            b = combination[i] - 48;
            s = original[i] - 48;
        }
        minimumMoves += min(b-s,(s+10)-b);
    }
    cout << minimumMoves << endl;
    return 0;
};
