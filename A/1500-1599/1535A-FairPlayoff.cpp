#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int si[4],si2[4];
		for(int i = 0; i < 4; i++){ cin >> si[i]; si2[i] = si[i]; }
		sort(si2,si2+4);
		int m1,m2;
		m1 = max(si[0],si[1]);
		m2 = max(si[2],si[3]);
		if((m1 == si2[3] or m1 == si2[2]) and (m2 == si2[3] or m2 == si2[2])){ cout << "YES" << endl; }
		else{ cout << "NO" << endl; }		
	}
	return 0;
}
