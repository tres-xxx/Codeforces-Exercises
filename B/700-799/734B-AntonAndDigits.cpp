#include <iostream>
using namespace std;

int main(){
    int n2,n3,n5,n6;
    long long sum = 0;
    cin >> n2 >> n3 >> n5 >> n6;
    for(;n2>0 && n5>0 && n6>0;){
        sum+=256;
        n2--;
        n5--;
        n6--;
    }
    for(;n3>0 && n2>0;){
        sum+=32;
        n3--;
        n2--;
    }
    cout << sum << endl;
    return 0;
}
