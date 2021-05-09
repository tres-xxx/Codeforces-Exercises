#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i_even = -1, a_even=0;
    int i_odd = -1, a_odd=0;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        if(temp%2==0){
            a_even++;
            i_even=i+1;
        }
        else{
            a_odd++;
            i_odd=i+1;
        }
    }
    
    if(a_even>1) cout << i_odd;
    else cout << i_even;
    
    return 0;
}