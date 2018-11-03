#include <string.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    //string *seats = new string[n];
    char seats [1000][5];
    bool find = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            cin >> seats[i][j];
        }
        if(!find){
            if(seats[i][0] == 'O' && seats[i][1] == 'O'){
                seats[i][0] = '+';
                seats[i][1] = '+';
                find = true;
            }
            else{
                if(seats[i][3] == 'O' && seats[i][4] == 'O'){
                    seats[i][3] = '+';
                    seats[i][4] = '+';
                    find = true;
                }
            }
        }
    }
    if(find){
        cout << "YES" << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 5; j++){
                cout << seats[i][j];
            }
            cout << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
};
