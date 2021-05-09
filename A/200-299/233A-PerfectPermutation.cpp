#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if(n%2==1) cout << "-1";
	else{
		//int odd = 1;
		//if(n%2 == 0) odd = 0;
		//if(n == 2) cout << "2 1";
		/*else{
			for(int i = n/2; i > 1; i--)
				cout << i << " ";
			cout << '1';
			for(int i = n; i > (n/2); i--)
				cout << " " << i;
		}*/
		cout << "2 1";
		for(int i = 4; i <= n; i = i+2){
			cout << " " << i << " " << i-1;
		}
	}
	return 0;
}