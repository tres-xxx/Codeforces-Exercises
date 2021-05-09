#include <numeric>
#include <iostream>
using namespace std;

/*int gcd(int a,int b){
    int gcd_number;
    if(a > b){
        gcd_number = a;    
    }
    else{
        gcd_number = b;
    }
    while((a%gcd_number!=0) && (b%gcd_number!=0)){
        gcd_number--;
    }
    return gcd_number;
};*/

int main(){
    int a,b,n;
    cin >> a >> b >> n;
    int stones = n,i;
    int gcd_n;
    for(i = 0; ; i++){
        if(i % 2 == 0){
            gcd_n = gcd(a,stones);
        }
        else{
            gcd_n = gcd(b,stones);
        }
        if(gcd_n <= stones){
            stones -= gcd_n;
        }
        else{
            break;
        }
    }
    if(i%2==0){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
    return 0;
};
