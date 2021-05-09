#include <iostream>
using namespace std;

int main(){
    int n,s,d;
    cin >> n;
    s = d = 0;
    int cards[n];
    for(int i = 0; i < n; i++){
        cin >> cards[i];
    }
    bool turn = true; //Sereja turn is true, Dima turn is false
    int maxi;
    for(int i = 0,j = n-1; i <= j;){
        if(cards[i] > cards[j]){
            maxi = cards[i];
            i++;
        }
        else{
            maxi = cards[j];
            j--;
        }
        if(turn){s+=maxi;turn=false;}
        else{d+=maxi;turn=true;}
    }
    cout << s << " " << d << endl;
    return 0;
}
