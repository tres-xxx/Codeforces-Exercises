// This code has been gotten from https://github.com/prashantpcm94/CODEFORCES/blob/master/580B/580B.cpp 
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;

typedef long long ll;
typedef const std::pair<long long,long long> pll;

bool pairCompare(pll& firstE, pll& secondE){
	return firstE.first < secondE.first;
}

int main(){
	ll n,i,d,l=0,r=0,s=0,max;
	cin >> n >> d;
	pair<ll, ll> p[n];
	for(i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
	sort(p, p+n, pairCompare);
	r = 1;
	s = p[0].second;
	while(r < n && (p[r].first - p[0].first) < d){
		s += p[r].second;
		r++;
	}
	max = s;
	while(r < n && l < n){
		s -= p[l].second;
		l++;
		while(r < n && (p[r].first - p[l].first) < d){
			s += p[r].second;
			r++;
		}
		if(max < s) max = s;
	}
	cout << max << endl;		
	return 0;	
}
