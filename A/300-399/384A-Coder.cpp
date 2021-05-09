#include <iostream>
using namespace std;

int main(){
    int n, maxC,div;
    cin >> n;
    div = n/2;
    if(n%2 == 0)
        maxC = div*n;
    else
        maxC = ((div+1)*(div+1)) + (div*div);
    cout << maxC << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i%2 == 0){
                if(j%2 == 0) cout << "C";
                else cout << ".";
            }
            else{
                if(j%2 == 1) cout << "C";
                else cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
