#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int soldier[n];
	for(int i = 0; i < n; i++)	cin >> soldier[i];
	//if(n == 2)
	//	if(soldier[0] > soldier[1]) cout << "0";
	//else{
	int bigger,smaller;
	bigger = soldier[n-1];
	smaller = soldier[0];
	int b,s;
	b = n-1;
	s = 0;
	int j = n-1;
	for(int i = 1; i < n; i++, j-- ){
		if(smaller >= soldier[i] ){
			smaller = soldier[i];
			s = i;
				/*if(smaller == soldier[i]){
				//	s++;
				}*/
				//cout << s;
		}
		if(bigger <= soldier[j-1] ){
			bigger = soldier[j-1];
			b = j-1;
				//if(bigger == soldier[j-1]) b--;
				//cout << b;
		}
			//cout << i;
	}
	if(b > s) cout << (b) + (n-(s+2));
	else cout << b + (n-(s+1));
	//}
	//cout << b << s;
	//if(s == 0) s++;
	
	return 0;
}