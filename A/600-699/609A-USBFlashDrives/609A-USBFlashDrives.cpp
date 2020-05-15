#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,m; 
	cin >> n >> m;
	int ai[n];
	for(int i = 0; i < n; i++){
		cin >> ai[i];
	}
	sort(ai, ai+n);
	int count, s;
	s = count = 0;
	int cn = n;
	while(s < m){
		cn--;
		s += ai[cn];
		count++;	
	}
	cout << count << endl;
	return 0;
}
