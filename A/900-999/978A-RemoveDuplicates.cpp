#include <vector>
#include <string.h>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int seq[n];
	for(int i = 0; i < n; i++) cin >> seq[i];
	vector<int> rem;
	rem.push_back(seq[n-1]);
	for(int i = n-2; i >= 0; i--){
		bool found = true;
		for(auto x: rem) if(seq[i] == x) found = false;
		if(found) rem.insert(rem.begin(),seq[i]);
	}
	cout << rem.size() << endl;
	for(auto x: rem) cout << x << " ";
	cout << endl;
	return 0;
}
