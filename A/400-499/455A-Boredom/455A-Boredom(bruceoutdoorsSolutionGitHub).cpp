//Solution based on code posted by bruceoutdoors Github

#include <algorithm> //max function
#include <vector> //array
#include <iostream>
using namespace std;

typedef long long int bigInt; //abreviation
#define max_n 100001

int main(){
    long n,x;
    vector<bigInt> dp(max_n, 0), c(max_n, 0); //c == count how many in the position
    cin >> n;
    long i_max = 0;
    while(n--){
        cin >> x;
        c[x]++;
        i_max = max(i_max, x);
    }
    dp[1] = c[1]; //first position = 1; just add the number of times that appears
    for(int i = 2; i <= i_max; i++){
        dp[i] = max(dp[i-1], dp[i-2] + (i*c[i]));
    }
    cout << dp[i_max];
    return 0;
}
