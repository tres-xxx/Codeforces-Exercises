#include <iostream>
using namespace std;

int main(){
    int a,b,c,max;
    cin >> a >> b >> c;
    if((a==1&&b==1)||(a==1&&c==1)||(b==1&&c==1)||(a==1&&b==1&&c==1)){
       if(a==1&&b==1&&c==1)max=a+b+c;
       else{
           if(a==1&&b==1) max=(a+b)*c;
           else{
               if(b==1&&c==1) max=a*(b+c);
               else max=a+b+c;
           }
       }
    }
    else{
        if(a==1) max=(a+b)*c;
        else{
            if(b==1){
                if(a>c) max=a*(b+c);
                else max=(a+b)*c;
            }
            else{
                if(c==1) max=a*(b+c);
                else max=a*b*c;
            }
        }
    }
    cout << max;
    return 0;
}