#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int *li = new int [m];
    int *ri = new int [m];
    for(int i = 0; i < m; i++){
        cin >> li[i] >> ri[i];
    }
    for(int i = 0; i < n; i++){
        if(i%2==0){
            cout << "1";
        }
        else{
            cout << "0";        
        }
    }    
    cout << endl;
    return 0;
}
