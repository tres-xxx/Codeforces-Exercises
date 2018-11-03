#include <iostream>
using namespace std;

int main(){
    long sum=0;
    int a,b,c;
    cin >> a >> b >> c;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            for(int k = 1; k <= c; k++){
                int mod=1;
                int temp = i*j*k;
                for(int l=2; l<=temp; l++){
                    if(temp%l==0) mod++;
                }
                sum = sum + mod; 
            }
        }
    }
    cout << sum;
    return 0;
}