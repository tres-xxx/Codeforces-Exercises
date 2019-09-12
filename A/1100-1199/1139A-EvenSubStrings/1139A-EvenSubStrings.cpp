/*
// I didn't understand the problem, too strange? -.-
// so I had to search it online... -.-
*/
// Next is the solution from https://blog.lucien.ink/archives/406/
#include <iostream>
using namespace std;

int main(){
	long long n;
	string s;
	cin >> n >> s;
	long long ss = 0;
	for(long long i = 0; i < n; i++)
		// This is the solution because the substring is strictly from left to right
		if((s[i] - '0') % 2 == 0)
			ss += (i+1);
	cout << ss << endl;
	return 0;
}
