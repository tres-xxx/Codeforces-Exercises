#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 10;
    //int cards[]={4,4,4,4,4,4,4,4,4,15};
    cin >> n;
    if(n <= 10 || n >= 22){ cout << "0";}
    else{
        if(n == 20){cout << "15";}
        else{cout << "4";}
    }
    /*else{
        int temp = n - sum;
        if(temp == 10){ cout << "15";}
        else{ cout << "4";}
    }*/
    cout << endl;
    return 0;
}