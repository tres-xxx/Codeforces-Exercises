#include <string.h>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    string pixel;
    bool color = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> pixel;
            if(!color){
                if(pixel[0] == 'C' || pixel[0] == 'M' || pixel[0] == 'Y'){
                    color = true;
                }
            }
        }
    }
    if(color){
        cout << "#Color" << endl;
    }
    else{
        cout << "#Black&White" << endl;
    }
    return 0;
}
