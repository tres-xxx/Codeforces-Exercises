//with the help of the code posted by fuwutu - Github
#include <algorithm>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    
    const long long top = 1000001;
    
    long long n;
    cin >> n;
    
    bool isnotprime[top] = {false};
    for(int i = 3; i < top; i += 2){ //divided the cycle by two /just odd numbers
        if(!isnotprime[i]){
            int j = i*2; //even number
            for(int k = i+j; k < top; k+=j){ //all odd numbers
                isnotprime[k] = true;
            }
        }
    }
    
    std::vector<long long> tprime;
    tprime.push_back(4); //first number and only number even
    for(int i = 3; i < top; i+=2){
        if(!isnotprime[i]){
            tprime.push_back(static_cast<long long>(i) * static_cast<long long>(i));
        }
    }
    
    while(n--){
        long long xi;
        cin >> xi;
        binary_search(tprime.begin(), tprime.end(), xi) ? cout << "YES"<<endl : cout << "NO" << endl;
    }
    
    return 0;
}