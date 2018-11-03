#include <iostream>
using namespace std;

int main(){
    int k;
    cin >> k;
    int time_panel[10]={};
    char temp;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> temp;
            if(temp != 46){
                time_panel[temp-48]++;
            }
        }
    }
    k = k*2;
    bool win = true;
    for(int i = 1; i < 10; i++){
        if(time_panel[i] > k){
            win = false;        
        }
    }
    if(win){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
};
