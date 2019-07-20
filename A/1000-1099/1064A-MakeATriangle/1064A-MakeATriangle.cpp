// I didn't understand the problem so... this is the code in which is 
// based on the answer

#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	//int a,b,c;
	//cin >> a >> b >> c;
	int t[3]; //triangle
	for(int i = 0; i < 3; i++) cin >> t[i];
	sort(t, t+3);
	if(t[0]+t[1] > t[2])
		cout << 0;
	else
		cout << t[2]-t[1]-t[0]+1;
	cout << endl;
	return 0;
}
