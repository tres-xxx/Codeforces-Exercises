//#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;

long long no_zeros(long long n){
    long long new_n = 0;
    int count = 0;
    while(n > 0){
        int z = n%10;
        if(z != 0){
            new_n += (z*(pow(10,count)));
            count++;
        }
        n /= 10;
    }
    return new_n;
};

int main(){
    //ASCII 48 = "0"
    /*string a;
    string b;
    cin >> a >> b;
    
    char d = 50;
    cout << d;*/
    long long a,b,c;
    cin >> a >> b;
    c = a+b;
    a = no_zeros(a);
    b = no_zeros(b);
    c = no_zeros(c);
    long long new_c = a+b;
    if(new_c == c){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}