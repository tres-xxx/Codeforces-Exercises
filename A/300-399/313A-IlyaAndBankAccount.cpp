#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
    long state;
    long array_state[12] = {-15};
    cin >> state;
    if(state<0){
        long temp = state;
        int greater_p = 0,i=0;
        
        for(; temp != 0; i++){
            array_state[i]=temp%10;
            //cout << array_state[i];
            temp/=10;
        }
        
        if(array_state[0] < array_state[1]) array_state[0]=-15;
        else array_state[1] = -15;
        
        if(i<=2){
            if(array_state[1]==-15) cout << array_state[0];
            else cout << array_state[1];
        }
        else{
            i--;
            cout << array_state[i];
            i--;
            for(;i>=0;i--)
                if(array_state[i]!=-15) cout << abs(array_state[i]);
        }
    }
    else cout << state;
    return 0;
}