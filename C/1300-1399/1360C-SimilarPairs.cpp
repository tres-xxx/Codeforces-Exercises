// tutorial from https://codeforces.com/blog/entry/77846
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	string ans[t];
	for(int i = 0; i < t; i++){
		cin >> n;
		int eT,oT;
		eT = 0;
		oT = 0;
		int ai[n];
		for(int j = 0; j < n; j++){
			cin >> ai[j]; 
			if(ai[j] % 2 == 0){ eT++; }
			else{ oT++; }
		}
		if(eT%2==0 and oT%2==0){ ans[i] = "YES"; continue; }
		if(eT%2 == oT%2){
			sort(ai,ai+n);
			for(int j = 1; j < n; j++){
				if((ai[j]-ai[j-1]) == 1){ ans[i] = "YES"; break;}
			}
			if(ans[i] != "YES"){ ans[i] = "NO"; }
		}
		else{ ans[i] = "NO"; }
			
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
