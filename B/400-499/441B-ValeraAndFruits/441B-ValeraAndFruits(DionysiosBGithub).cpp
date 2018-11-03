//this solution has been posted by user DionysiosB on Github.com
#include <vector>
#include <iostream>
using namespace std;

int main(){
    const long N = 3000; //top of trees
    vector <long> harvest(N+2,0);
    long n,v;
    cin >> n >> v;
    for(int i = 0; i < n; i++){
        long day,fruit;
        cin >> day >> fruit;
        harvest[day] += fruit;
    }
    long carry = 0;
    for(int i = 1; i <= N + 1; i++){
        harvest[i] +=  carry;
        if(harvest[i] > v){
            carry = harvest[i] - v;
            harvest[i] = v;
        }
        else{
            carry = 0;
        }
        if(carry > v){
            carry = v;
        }
    }
    long total = 0;
    for(int i = 0; i <= N+1; i++){
        total += harvest[i];
    }
    cout << total << endl;
    return 0;
}
