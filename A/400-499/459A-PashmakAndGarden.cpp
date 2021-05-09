#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
    long x_1,x_2,x_3,x_4,y_1,y_2,y_3,y_4;
    cin >> x_1 >> y_1 >> x_2 >> y_2;
    if(x_1==x_2 || y_1==y_2){
        if(x_1==x_2){
            y_3=y_1;
            if(y_1>y_2) x_3=(y_1-y_2)+x_1;
            else x_3=(y_2-y_1)+x_1;
            //---------
            y_4=y_2;
            x_4=x_3;
        }
        else{
            x_3=x_1;
            if(x_1>x_2) y_3=(x_1-x_2)+y_1;
            else y_3=(x_2-x_1)+y_1;
            //---------
            x_4=x_2;
            y_4=y_3;
        }
        cout << x_3 << " " << y_3 << " " << x_4 << " " << y_4;
    }
    else{
        if(abs(x_1-x_2) == abs(y_1-y_2)){
            x_3=x_2;
            y_3=y_1;
            x_4=x_1;
            y_4=y_2;
            cout << x_3 << " " << y_3 << " " << x_4 << " " << y_4;
        }
        else cout << "-1";
    }
    return 0;
}