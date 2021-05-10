//#include <algorithm>
#include <iostream>
using namespace std;
//#define SIZE 1000000001
#define SIZE 100001
int main(){
    long long n;
    cin >> n;
    long long errors [SIZE] = {};
    long long temp;
    for(long long i = 0; i < n; i++){
        cin >> temp;
        errors[temp]++;
    }
    for(long long i = 1; i < n; i++){
        cin >> temp;
        errors[temp]++;
    }
    for(long long i = 2; i < n; i++){
        cin >> temp;
        errors[temp]++;
    }
    for(long long i = 1; i < SIZE; i++){
        if(errors[i] == 1 || errors[i] == 2){
            cout << i << endl;
        }
    }
    return 0;
}
