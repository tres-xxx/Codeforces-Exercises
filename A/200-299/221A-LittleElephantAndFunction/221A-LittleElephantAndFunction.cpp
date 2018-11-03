#include <iostream>
using namespace std;

void permutation(int x){
    if(x == 1) cout << " " << x; 
    else{
        permutation(x-1);
        cout << " " << x ;
    }
}


int main(){
    int n;
    cin >> n;
    cout << n;
    n--;
    if(n>0) permutation(n);
    
    return 0;
}