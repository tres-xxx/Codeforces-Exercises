#include <iostream>
using namespace std;

int main(){
    int n; //amount of numbers
    int number_one = 0; //amount of 1's
    int number_zero = 0; //to check the greater 0
    int number_zero_help = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        short t;
        cin >> t;
        if(t == 1){
            number_one++;
            number_zero_help = 0; //sets again the counter
        }
        else{
            number_zero_help++;
            if(number_zero_help > number_zero){
                number_zero = number_zero_help;
            }
        }
    }
    if(number_zero == 0){
        if(n == 1){cout << "0";}
        else{cout << number_one--;}
    }
    else{
        cout << number_one + number_zero;
    }
    return 0;
}