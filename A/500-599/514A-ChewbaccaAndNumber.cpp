#include <string>
#include <iostream>
using namespace std;

int main(){
    string x,invX;
    cin >> x;
    invX = x;
    //invX[0] = '0';
    int digit;
    //int index=0;
    for(int i = 0; i < x.size(); i++){
        digit = x[i]-48;
        if((9 - digit) < digit){
            digit = 9-digit;
        }
        if(digit == 0 && i == 0){
            invX[i] = x[i];
        }
        else{
            invX[i] = digit+48;
        }
        
        /*if(index == 0){
            if(digit != 0){
                invX[index] = digit+48;
                index++;
            }
        }
        else{
            invX[index] = digit+48;
            index++;
        }*/
    }
    /*if(index == 0){
        index++;
        invX[0] = x[(x.size())-1];
    }*/
    //invX[index] = '\0';
    cout << invX << endl;
    return 0;
}
