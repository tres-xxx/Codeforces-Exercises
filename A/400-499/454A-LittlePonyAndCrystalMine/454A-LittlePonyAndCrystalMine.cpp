#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p = 1;
    bool upDown = true;
    for(int i = 0; i < n; i++){
        int j;
        for(j = 0; j < ((n-p)/2); j++)
            cout << '*';
        for(j = 0; j < p; j++)
            cout << 'D';
        for(j = 0; j < ((n-p)/2); j++)
            cout << '*';
        if(p >= n) upDown = false;
        if(upDown) p+=2;
        else p -= 2;
        cout << endl;
    }
    return 0;
}
