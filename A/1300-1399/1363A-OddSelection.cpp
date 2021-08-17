#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int ai[n];
		int odd=0;
		for(int i = 0; i < n; i++){
			cin >> ai[i];
			if(ai[i]%2 == 1){ odd++; }
		}
		int even = n-odd;
		if(even == 0){
			if(x%2 == 0){ cout << "No";}
			else{ cout << "Yes";}
		}
		else{
			if(odd == 0){ cout << "No"; }
			else{
				if(x==n && odd%2==0){ cout << "No";}
				else{ cout << "Yes"; }
			}
		}
		cout << endl;
	}
	return 0;
}
