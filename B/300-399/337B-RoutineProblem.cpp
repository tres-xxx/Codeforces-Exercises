#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a > c || b > d){
        while(a > c && b > d){
            c++;
            d++;
        }
        if(a == c){
            if((b-d) == 0)
                cout << "0" << endl;
            else
                cout << (b-d) << "/" << b << endl;
        }
        else{
            if((a-c) == 0)  
                cout << "0" << endl;
            else
                cout << (a-c) << "/" << a << endl;
        }
    }
    else{
        while(a < c && b < d){
            a++;
            b++;
        }
        if(a == c){
            if((d-b) == 0)
                cout << "0" << endl;
            else
                cout << (d-b) << "/" << d << endl;
        }
        else{
            if((c-a) == 0)
                cout << "0" << endl;
            else
                cout << (c-a) << "/" << c << endl;
        }
    }
    
    return 0;
}
