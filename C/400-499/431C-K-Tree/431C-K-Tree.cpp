/**
Of course this is not my own solution :'( 
link code: http://codeforces.com/contest/431/submission/6676700
**/ 
#include <algorithm>
#include <stdio.h>
#include <iostream>
using namespace std;

const int mod = 1e9+7; //1000000007 => because answer should be module this number

void add(int &a, int b){
	a+=b;
	if(a >= mod) a-=mod;
}

int main(){
	int n,k,d;
	cin >> n >> k >> d;
	int dp[100][2]; //???
	dp[0][0] = 1;
	dp[0][1] = 0; 
	for(int i = 1; i <= n; i++){
		dp[i][0] = dp[i][1] = 0;
		for(int j = 1; j <= k; j++){
			if(i-j < 0) break;
			if(j < d){
				add(dp[i][0], dp[i-j][0]);
				add(dp[i][1], dp[i-j][1]);
			}
			else{
				add(dp[i][1], dp[i-j][0]);
				add(dp[i][1], dp[i-j][1]);
			}
		}
	}
	cout << dp[n][1] << endl;
	return 0;
}
