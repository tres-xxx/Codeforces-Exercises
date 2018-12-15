#include <utility>
#include <iostream>
using namespace std;

int main(){
    long long n,x;
    cin >> n >> x;
    long long cards = 0,sumC=0;
    long long xi,needC=0; 
    for(int i = 0; i < n; i++){
        cin >> xi;
        cards += xi;
    }
    cards = abs(cards);
    while(sumC < cards){
        sumC += x;
        needC++;
    }
    cout << needC;
    /*if(cards <= n){
        if(cards == 0) cout << "0";
        else cout << "1";
    }
    else{
        long long sumC = 0;
        while(sumC < cards){
            sumC += x;
            needC++;
        }
        cout << needC;
    }*/
    cout << endl;
    return 0;
}
