#include <iostream>
using namespace std;

int main(){
    long n,max,min;
    cin >> n;
    
    long long line [n][2];
    cin >> line[0][0] >> line[0][1];
    min = line[0][0];
    max = line[0][1];
    
    for(long i = 1; i < n; i++){
        cin >> line[i][0] >> line[i][1];
        if(line[i][0] < min) min = line[i][0];
        if(line[i][1] > max) max = line[i][1];
    }
    
    for(int i = 0; i < n; i++){
        if(line[i][0] == min && line[i][1] == max){
            cout << i+1;
            return 0;
        }
    }
    
    cout << "-1";
    return 0;
}