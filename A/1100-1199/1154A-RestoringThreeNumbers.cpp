#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	long s[4];
	long a,b,c;
	for(int i = 0; i < 4; i++) cin >> s[i];
	sort(s,s+4);
	bool found = false;
	int t = 0;
	while(!found){
		a = (s[3]/2)-t;
		b = s[2]-a;
		c = s[3]-a-b;
		if((b+c) == s[0] || (b+c) == s[1] || (b+c) == s[2]) found = true;
		t++;
	}
	cout << a << " " << b << " " << c << endl;
	return 0;
}
