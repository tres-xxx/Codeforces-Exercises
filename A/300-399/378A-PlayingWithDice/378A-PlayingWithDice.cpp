#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int t_a=0,t_b=0,t_ab=0;
    for(int i = 1; i <= 6; i++ ){
        int ta = abs(a-i), tb=abs(b-i);
        if(ta < tb){ t_a++;}
        else{
            if(tb < ta){t_b++;}
            else{t_ab++;}
        }
    }
    cout << t_a << " " << t_ab << " " << t_b;
    return 0;
}