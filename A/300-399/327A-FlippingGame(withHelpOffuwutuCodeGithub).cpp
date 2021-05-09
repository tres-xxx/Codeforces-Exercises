//with the help of the code posted by fuwutu - Github
#include <iostream>
using namespace std;

int main(){
    int n; //amount of numbers
    int count1 = 0, extra0 = 0, extra0max = -1; //-1 to erase the option of just one number
    cin >> n;
    while(n--){
        int number;
        cin >> number;
        if(number == 1){
            count1++;
            if(extra0 > 0){
                extra0--; //if someone take the biggest amount of zeros
            }
        }
        else{
            extra0++;
            if(extra0 > extra0max){
                extra0max = extra0;
            }
        }
    }
    cout << count1 + extra0max;
    return 0;
}