//fuwutu solution GitHub
#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    if(x > 0){
        if(y > 0){ //I
            cout << "0" << " " << x+y << " " << x+y << " " << "0";
        }
        else{ //IV
            cout << "0" << " " << y-x << " " << x-y << " " << "0";
        }
    }
    else{
        if(y > 0){ //II
            cout << x-y << " " << "0" << " " << "0" << " " << y-x;
        }
        else{//III
            cout << x+y << " " << "0" << " " << "0" << " " << x+y;
        }
    }
    cout << endl;
    return 0;
}