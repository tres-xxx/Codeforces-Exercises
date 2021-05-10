#include <iostream>
using namespace std;

long long sum_spell(long long n){
    long long sum_n = 0;
    if(n<10){
        return sum_n;
    }
    while(n>0){
        sum_n += (n%10);
        n = n / 10;
    }
    return sum_n;
}

int main(){
    long long n;
    cin >> n;
    int times_replaced = 0;
    while(n!=0){
        n = sum_spell(n);
        if(n!=0){
            times_replaced++;
        }
    }
    cout << times_replaced << endl;    
    return 0;
};
