#include <stdlib.h>
#include <string>
#include <map>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	string k,s;
	for(int i = 0; i < t; i++){
		cin >> k >> s;
		map<char, int> ki;
		for (int j = 1; j <= k.size(); j++){
			ki[k.at(j-1)] = j;
		}
		int ts = 0;
		int p = 1;
		char b = s[0];
		while (p < s.size()){
			if(b != s[p]){
				ts += abs(ki[s[p]]-ki[b]);
			}
			b = s[p];
			p++;
		}
		
		cout << ts << endl;
	}
	return 0;
}
