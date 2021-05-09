#include <iostream>
using namespace std;

int main(){
    long long a,b,square = 0;
    cin >> a >> b;
    bool nosq = true;
    while(nosq){
        if(a > b){
            if(a%b == 0){
                square += (a/b);
                nosq = false;
            }
            else{
                if(b < (a/2)){
                    square += (a/b);
                    a = a%b;
                }
                else{
                    a = a-b;
                    square++;
                }
            }
        }
        else{
            if(a < b){
                if(b%a == 0){
                    square += (b/a);
                    nosq = false;
                }
                else{
                    if(a < (b/2)){
                        square += (b/a);
                        b = b%a;
                    }
                    else{
                        b = b-a;
                        square++;
                    }
                }
            }
            else{nosq = false;square++;}
        }
    }
    cout << square << endl;
    return 0;
}
