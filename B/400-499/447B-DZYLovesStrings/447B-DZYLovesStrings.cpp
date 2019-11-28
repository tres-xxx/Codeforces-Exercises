// with the help of the code posted in this site https://github.com/msdeep14/codeforces/blob/master/447B.cpp
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	string s;
	int k,maxi,sum,t;
	int wi[26];
	cin >> s >> k;
	for(int i = 0; i < 26; i++){
		cin >> wi[i];
	}
	maxi=wi[s[0]-97];
	sum = maxi;
	for(t = 1; t < s.size(); t++){
		//maxi = max(maxi, wi[s[t]-97]);
		sum += (wi[s[t]-97]*(t+1));
	}
	sort(wi, wi + 26);
	t = s.size()+1;
	for(int i = 0; i < k; i++){
		//sum += (maxi*(t+1));
		sum += (t*wi[25]);
		t++;
	}
	cout << sum << endl;
	return 0;
}
