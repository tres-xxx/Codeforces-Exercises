#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	string s; 
	cin >> n >> s;
	int ss = 0;
	for(int i = 0; i < n; i=i+2){
		if(s[i] == s[i+1]){
			ss++;
			if(s[i] == 'a'){s[i] = 'b';}
			else{s[i] = 'a';}
		}
	}
	cout << ss << endl;
	cout << s << endl;
	return 0;
}
