// solution from https://github.com/AsifurRahman/
#include <map>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,p;
	cin >> n;
	string name[10000];
	int score[10000];
	map <string, long long> ns;
	long long maxS = 0;
	for(long long i = 0; i < n; i++){
		cin >> name[i] >> score[i];
		ns[name[i]] += score[i];
		//maxS = max(maxS,ns[name[i]]);
	}
	for(long long i = 0; i < n; i++){
		maxS = max(maxS, ns[name[i]]);
	}
	//find the first who gets the higher score, a review of what has happened
	map <string, long long> ns2;
	string ans; 
	//cout << maxS << endl;
	for(long long i = 0; i < n; i++){
		ns2[name[i]] += score[i];
		//if(ns2[name[i]]==maxS){
		if(ns2[name[i]] >= maxS && ns[name[i]] == maxS){
			//p = i;
			ans = name[i];
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
