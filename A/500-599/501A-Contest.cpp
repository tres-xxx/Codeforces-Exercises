#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long a,b,c,d; //a,b => points || c,d => minutes
    cin >> a >> b >> c >> d;
    long long misha = max((3*a)/10,a-(a/250)*c);
    long long vasya = max((3*b)/10,b-(b/250)*d);
    if(misha > vasya){cout << "Misha";}
    else{
        if(vasya != misha){cout << "Vasya";}
        else{cout << "Tie";}
    }
    return 0;
}