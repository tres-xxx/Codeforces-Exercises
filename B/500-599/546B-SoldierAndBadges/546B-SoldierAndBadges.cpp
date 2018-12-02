#include <iostream>
using namespace std;

int main(){
    int n,t,coins=0,left,right;
    cin >> n;
    int ai[n*2]={};
    for(int i = 0; i < n; i++){
        cin >> t;
        ai[t-1]++;
    }
    for(int i = 0; i < n; i++){
        while(ai[i] > 1){
            /*left = -1;
            for(int j = i-1; j >= 0; j--){
                if(ai[j] == 0){
                    left = j;
                    break;
                }
            }*/
            for(int j = i+1; ; j++){
                if(ai[j] == 0){
                    right = j;
                    break;
                }
            }
            /*if(left != -1){
                if(left <= right){
                    ai[left]++;
                    bag += i-left; 
                }
            }*/
            coins += right-i;
            ai[right]++;
            ai[i]--;
        }
    }
    cout << coins << endl;
    return 0;
}
