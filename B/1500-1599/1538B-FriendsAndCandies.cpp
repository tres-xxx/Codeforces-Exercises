#include <iostream>
using namespace std;

int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n,i,sum;
		cin >> n;
		long long ai[n];
		sum = 0;
		for(i = 0; i < n; i++){cin >> ai[i]; sum += ai[i]; }
		if(sum%n != 0){ cout << -1;}
		else{
			long long div = sum/n,count = 0;
			for(i = 0; i < n; i++){
				if(ai[i] > div){ count++; }
			}
			cout << count;
		}
		cout << endl;
	}
	return 0;
}
