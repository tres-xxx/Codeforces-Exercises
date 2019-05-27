#include <iostream>
using namespace std;

int main(){
	long long n,m;
	cin >> n >> m;
	if(n == m)
		cout << "0" << endl;
	else{
		long long nn = n;
		int i = 0;
		int count = 0;
		while(nn < m){
			nn*=3;
			i++;
		}
		count = i;
		for(;i>0 && nn != m; i--){
			nn/=3;
			count--;
			while(nn < m){
				nn*=2;
				count++;
			}
			if(nn == m) break;
			nn/=2;
			count--;
		}
		if(nn == m) cout << count;
		else cout << "-1";
		cout << endl;
	}
	return 0;
}

// 2 - 3 - 2 - 3 - 3
