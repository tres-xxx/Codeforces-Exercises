#include <iostream>
using namespace std;

int main(){
    int n; //number of brothers
    cin >> n; 
    /*for(int i = 1, j = (n*2);i<=n;i++,j--){
        cout << i << " " << j << endl;
    }*/
    for(int i = 0; i < n; i++){
        cout << i+1;
        for(int j = 1; j < n; j++){
            cout << " " << (n*j) + ((i+j)%n) + 1;
        }
        cout << endl;
    }
    return 0;
}