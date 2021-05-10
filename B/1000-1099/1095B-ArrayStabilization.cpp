// at first I thought I understood, but I didn't. So I took help from
// the code posted by kantuni https://github.com/kantuni/Codeforces/blob/master/1095B/array-stabilization.cpp

#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int ai[n];
	for(int i = 0; i < n; i++) cin >> ai[i];
	sort(ai,ai+n);
	int ans = ai[n-1]-ai[0];
	ans = min(ans,ai[n-1]-ai[1]);
	ans = min(ans,ai[n-2]-ai[0]);
	cout << ans << endl;
	return 0;
}
