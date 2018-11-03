//code writed by SH-anonta on Github
#include <iostream>
using namespace std;

int main(){
    long n, x;
    cin >> n >> x;
    long count = 0;
    if(x <= n){
        count++;
    }
    for(long i = 2; i <= n; i++){
        if(x%i == 0 && x/i<=n){
            count++;
        }
    }
    cout << count << endl;
    return 0;
};
