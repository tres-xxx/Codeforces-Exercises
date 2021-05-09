//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    char chess[n][m];
    for(int i = 0, j = 0; i < n; j++){
        char iswrong;
        cin >> iswrong;
        if(iswrong == '.'){
            if(i%2 == 0){
                if(j%2 == 0) chess[i][j] = 'B';
                else chess[i][j] = 'W';
            } 
            else{
                if(j%2 == 0) chess[i][j] = 'W';
                else chess[i][j] = 'B';
            }
        }
        else chess[i][j] = '-';
        
        if(j+1 == m){
            j = -1;
            i++;
        }
        //cout << i << j;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << chess[i][j];
        }
        cout << "\n";
    }
    
    
}