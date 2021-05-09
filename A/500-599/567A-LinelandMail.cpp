#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long *lineLand = new long long [n];
    for(int i = 0; i < n; i++){
        cin >> lineLand[i];
    }
    for(int i = 0; i < n; i++){
        if(i == 0 || i == (n-1)){
            if(i == 0){
                cout << abs(lineLand[i+1]-lineLand[i]);
            }
            else{
                cout << abs(lineLand[i]-lineLand[i-1]);
            }
        }
        else{
            cout << min(abs(lineLand[i-1]-lineLand[i]),abs(lineLand[i+1]-lineLand[i]));
        }
        cout << " ";
        cout << max(abs(lineLand[0]-lineLand[i]),abs(lineLand[n-1]-lineLand[i])) << endl;
    }
    return 0;
}
