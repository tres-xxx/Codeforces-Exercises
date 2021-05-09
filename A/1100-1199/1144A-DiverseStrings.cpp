#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	string d[n];
	for(int i = 0; i < n; i++) cin >> d[i];
	for(int i = 0; i < n; i++){
		bool accept = true;
		int s = d[i].size();
		char comp;
		string ts = d[i];
		sort(ts.begin(),ts.end());
		for(int j = 1; j < s; j++){
			comp = ts[j-1]+1;
			if(ts[j] != comp){
				accept = false;
				break; 
			}
		}
		if(accept) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
	return 0;
}
