#include <iostream>
using namespace std;

int main(){
	int t; 
	cin >> t;
	while(t > 0){
		int n;
		cin >> n;
		long long bn[n];
		int pos = 0;
		bool goBack = false;
		for(int i = 0; i < n; i++){
			cin >> bn[pos];
			if(goBack){
				pos -= 2;
			}
			else{
				pos += 2;
				if(pos >= n){ 
					goBack = true;
					if(n%2 == 0){
						pos = n-1;
					}
					else{
						pos = n-2;
					}
				}
			}
		}
		for(int i = 0; i < n; i++){
			cout << bn[i] << " ";
		}
		cout << endl;
		t--;
	}
	return 0;
}

