//Based on the answer posted by DionysiosB GitHub
#include <iostream>
using namespace std;

int main(){
    const long mod = 1073741824;
    int a,b,c;
    cin >> a >> b >> c;
    const long max = a*b*c;
    long *divisors = new long[max+2]; //max number permutations
    divisors[1] = 1; //this is the number 1
    for(long i = 2; i <= max; i++){
        divisors[i] = 2; //a number is divisible at least by 1 and itself
    }
    for(long i = 2; i <= max/2; i++){ //This is the top of division a*2=c
        for(long j=2*i; j<=max; j+=i){
            divisors[j]++; //add one more if there is a divisor
        }
    }
    
    long sum=0;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            for(int k = 1; k <= c; k++){
                long temp = i*j*k;
                sum = divisors[temp] + sum;
                sum = sum%mod;
            }
        }
    }
    
    cout << sum;
    
    return 0;
}