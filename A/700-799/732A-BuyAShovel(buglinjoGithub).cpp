//based on the code writted by buglinjo and posted on Github
#include <iostream>
using namespace std;

int main(){
    int k,r;
    int i = 0, j = 1, h = 1;
    cin >> k >> r;
    bool b = true;
    while(b){
        i++;
        h = k*i;
        if((h%10 == 0) || (h%10 == r)){
            b = false;
        }
    }
    cout << i << endl;
    return 0;
}
