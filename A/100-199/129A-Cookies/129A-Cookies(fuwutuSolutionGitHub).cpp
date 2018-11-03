#include <iostream>
using namespace std;

int main(){
    int n;// number bags
    cin >> n;
    int a_i; //what it's going to contain the ith bag
    int odd = 0;
    int even = 0;
    for(; 0 < n; n--){
        cin >> a_i;
        if(a_i % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(odd % 2 == 1){
        cout << odd;
    }
    else{
        cout << even;
    }
    cout << endl;
    
    return 0;
}