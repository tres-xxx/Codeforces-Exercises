//this code has been based on the code posted by buglinjo on github.com
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    long long n[t], t2, s,s2,nm; //__int64_t uint64_t
    for(int i = 0; i < t; i++){
        cin >> t2;
        nm = 1;s2=0;
        s = t2 * (t2+1) / 2; //formula = n(n+1)/2 => sum of all numbers to n
        while(nm <= t2){
            s2 += nm;
            nm *= 2;
        }
        n[i] = s - 2*s2; //(s-s2)-s2
    }
    for(int i = 0; i < t; i++){
        cout << n[i] << endl;
    }
    return 0;
}
