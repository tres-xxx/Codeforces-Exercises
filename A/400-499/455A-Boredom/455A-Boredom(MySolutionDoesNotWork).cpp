#include <iostream>
using namespace std;

#define size_ak 100001

int main(){
    long n;
    cin >> n;
    
    long ak[size_ak]={};
    long temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        ak[temp]++;
    }
    long greater = 0;
    for(int i = 1; i < size_ak; i++){
        if( i != 1 && i != (size_ak - 1)){
            temp = ((i-1)*ak[i-1]) + ((i+1)*ak[i+1]);
        }
        else{
            if(i == 1){
                temp = 2*ak[2];
            }
            else{
                temp = (size_ak-2)*ak[size_ak-2];
            }
        }
        if(temp > greater){
            greater = temp;
        }
    }
    cout << greater << endl;
    return 0;
}
