// again not my solution
// this is the code in which I have understood a way to solve it https://github.com/jackiehluo/practice/blob/master/codeforces/500s/514b-han-solo-and-lazer-gun.cpp

#include <iostream>
using namespace std;

int main(){
	int n,s = 0;
	int hs[2]; // [0] = x [1] = y
	int st[1000][2]; // maximum amount of stormtrooper soldier positions
	int d1[2],d2[2]; // square for maximum shoot
	bool k[1000]; // I've been shooted?
	cin >> n >> hs[0] >> hs[1];
	for(int i = 0; i < n; i++){
		cin >> st[i][0] >> st[i][1]; // get stormtrooper position
	}
	for(int i = 0; i < n; i++){
		if(k[i]) continue;
		s++;
		d1[0] = st[i][0] - hs[0];
		d1[1] = st[i][1] - hs[1];
		for(int j = 0; j < n; j++){
			d2[0] = st[j][0] - hs[0];
			d2[1] = st[j][1] - hs[1];
			if(d1[0]*d2[1] == d1[1]*d2[0]){
				k[j] = 1; // same position of the line shoot
			}
		}
	}
	cout << s << endl;
	return 0;
}
