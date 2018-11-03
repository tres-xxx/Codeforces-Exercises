//this code has been posted by DionysiosB on github.com
#include <iostream>
using namespace std;

int gcd(int a, int b){
    return (b == 0) ? a : gcd(b, a%b);
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int nom,den,commonDiv;
    if(a*d <= b*c){
        nom = b*c - a*d;
        den = b*c;
    }
    else{
        nom = a*d - b*c;
        den = a*d;
    }   
    commonDiv = gcd(nom,den);   
    cout << nom/commonDiv << "/" << den/commonDiv << endl;
    return 0;
}
