#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n,p=0;
	cin >> n;
	int ai[n];
	for(int i = 0; i < n; i++) cin >> ai[i];
	sort(ai,ai+n);
	int t = 0;
	for(int i = 0; i < (n/2); i++){
		if (ai[t] != ai[t+1])
			p += (ai[t+1]-ai[t]);
		t+=2;
	}
	// for(int i = 0; i < n; i++) cout << ai[i] << endl;
	cout << p << endl;
	return 0;
}
