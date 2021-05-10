// solution from https://github.com/kantuni/Codeforces/blob/master/1213C/book-reading.cpp
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main(){
	/** //This (mine) solution does not work
	long long q;
	cin >> q;
	long long n,m,t,t2;
	//{amount_numbers,sum_numbers,number1,number2,...,numbern}
	long long d[10][12]={	
			{0,0,0,0,0,0,0,0,0,0},
			{10,45,1,2,3,4,5,6,7,8,9,0},
			{5,20,2,4,6,8,0},
			{10,45,3,6,9,2,5,8,1,4,7,0},
			{5,20,4,8,2,6,0},
			{2,5,5,0},
			{5,20,6,2,8,4,0},
			{10,45,7,4,1,8,5,2,9,6,3,0},
			{5,20,8,6,4,2,0},
			{10,45,9,8,7,6,5,4,3,2,1,0}
			};
	long long a[q] = {};
	for(long long i = 0; i < q; i++){
		cin >> n >> m;
		t = n/m;
		long long f = m%10;
		if(t >= d[f][0]){
			a[i] = d[f][1]*(t/d[f][0]);
			t = t%d[f][0];
		}
		t2 = 2;
		for(;t>0;t--){
			a[i] += d[f][t2];
			t2++;
		}
	}
	for(long long i = 0; i < q; i++){
		cout << a[i] << endl;
	}
	**/
	int q,qq; 
	cin >> q;
	qq = q;
	long long ans[q];
	while( q-- ){
		long long n,m;
		cin >> n >> m;
		if(n < m){ // no division = all in one day
			ans[q] = 0;
			continue;
		}
		long long start = m;
		long long end = (n/m)*m; //exact division
		long long cnt = (end-start)/m+1; //max division
		vector<int> cycle;
		long long sum = 0;
		for(long long i = 1; i*m <= n; i++){ // all possible numbers
			int nxt = (i*m)%10;
			auto it = find(cycle.begin(), cycle.end(), nxt);
			if(it != cycle.end()){ break; } // end of possibilities
			cycle.push_back(nxt);
			sum += nxt; // sum of last numbers
		}
		ans[q] = sum * (cnt/cycle.size()); // sum of each round of possibilities
		long long rem = cnt%cycle.size();
		reverse(cycle.begin(), cycle.end());
		while(rem > 0){
			ans[q] += cycle.back(); // add each last number to the sum
			cycle.pop_back();
			rem--;
		}
	}
	while(qq--){ cout << ans[qq] << endl; }		
	return 0;
}
