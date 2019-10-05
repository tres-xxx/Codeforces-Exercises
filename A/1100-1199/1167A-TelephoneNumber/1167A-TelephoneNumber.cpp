#include <string.h>
#include <vector>
#include <iostream>
using namespace std;

int main(){
	int t,tt;
	cin >> t;
	int n;
	string s;
	vector <string> out;
	tt = t;
	while(t--){
		cin >> n >> s;
		if(n < 11){ out.push_back("NO");}
		else{
			bool eight = false;
			for(int i = n-11; i >= 0; i--){
				if(s[i] == '8'){
					eight = true;
					break;
				}
			}
			if(eight){ out.push_back("YES");}
			else{ out.push_back("NO");}
		}
	}
	for(int i = 0; i < tt; i++){ cout << out[i] << endl;}
	return 0;
}
