#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,a,b,c,d;
		cin >> n >> a >> b >> c >> d;
		long long single[2],whole[2];
		single[0] = abs(a-b)*n;
		single[1] = (a+b)*n;
		whole[0] = abs(c-d);
		whole[1] = c+d;
		if(single[0] > whole[1] or single[1] < whole[0]){ cout << "No" << endl; }
		else{ cout << "Yes" << endl; }
	}
	return 0;
}
