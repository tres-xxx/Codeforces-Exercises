#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
    int n,a,b,pos;
    cin >> n >> a >> b;
    pos = a;
    for(int j = 0; j != b;){
        if(j > b){
            j--;
            pos--;
            if(pos < 1) pos = n;
        }
        else{
            j++;
            pos++;
            if(pos > n) pos = 1;
        }
    } 
    cout << pos << endl;
    return 0;
}
