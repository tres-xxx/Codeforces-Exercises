#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int aij[10][10];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != 0 && j != 0){
                aij[i][j] = aij[i-1][j] + aij[i][j-1];
            }
            else{
                aij[i][j] = 1;
            }
        }
    }
    cout << aij[n-1][n-1] << endl;
    return 0;
};
