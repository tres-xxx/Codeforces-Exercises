#include <iostream>
using namespace std;

int main(){
    char a[100001];
    cin >> a;
    for(int i = 0, j = 0; a[i] != '\0'; i++){
        if(a[i] != '0' && a[i+1] != '\0') cout << a[i];
        else{
            if(j != 0) cout << a[i];
            else j = 1;
        }
    }
    return 0;
}