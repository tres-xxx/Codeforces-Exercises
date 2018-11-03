#include <iostream>
using namespace std;

#include <algorithm>

int main(){
    int k;
    cin >> k;
    int months[12];
    for(int i = 0; i < 12; i++) cin >> months[i];
    sort(months, months + 12);
    
    int howMuch = 0;
    int add = 0;
    for(int i = 11; i >= 0 && add < k; i--){
        add += months[i];
        howMuch++;
    }
    
    if(add < k) cout << "-1";
    else cout << howMuch;
    
    return 0;
}