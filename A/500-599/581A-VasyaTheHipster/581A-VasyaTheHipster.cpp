#include <iostream>
using namespace std;

int main(){
    int a,b; //a == red || b == blue
    cin >> a >> b;
    int days_different = 0;
    int days_same = 0;
    if(a > b){
        days_different = b;
        a = a-b;
        days_same = a/2;
    }
    else{
        days_different = a;
        b = b-a;
        days_same = b/2;
    }
    cout << days_different << " " << days_same << endl;
    return 0;
};
