#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int fp1 = 1, fp2 = 0,t;
    t = fp1+fp2;
    fp2 = fp1;
    fp1 = t;
    for(int i = 1; i <= n; i++){
        if(fp1 == i){
            t = fp1+fp2;
            fp2 = fp1;
            fp1 = t;
            cout << 'O';
        }
        else cout << 'o';
    }
    cout << endl;
    return 0;
}
