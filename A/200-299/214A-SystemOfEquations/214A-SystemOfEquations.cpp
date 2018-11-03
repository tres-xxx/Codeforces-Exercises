#include <iostream>
using namespace std;

int  main(){
    /**int total = 0;
    int temp;
    cin>> temp; total += temp;
    cin>> temp; total += temp;*/
    int n,m;
    cin >> n >> m;
    
    int exist = 0;
    
    int square = 0;
    for(int i = 0; square <= n; i++,square=i*i){
        //square = i*i;
        int b = n-square;
        if(((b*b) + i) == m) exist++;
    }
    
    cout << exist;
    
    return 0;
    
}