//this code has been written by fuwutu and posted on Github
#include <iostream>
using namespace std;

int main(){
    bool possible = true;
    int n,x,a,b; //n = number of dice in the tower|x = number on the top
    cin >> n >> x;
    while(n--){
        cin >> a >> b;
        if(x == a || x == b || x == (7-a) || x == (7-b)){
            possible = false;
        }
        x = 7-x;
    }
    cout << (possible ? "YES" : "NO") << endl;
    return 0;
};
