#include <string.h>
#include <iostream>
using namespace std;

int main(){
	int n,fl;
	string s;
	cin >> n >> s;
	fl = 0;
	for(int i = 2; i<=n; i++){
		if(s[i-2] == 'S' && s[i-1] == 'F'){
			fl++;
		}
		else{
			if(s[i-2] == 'F' && s[i-1] == 'S'){
				fl--;
			}
		}
	}
	if(fl > 0){ cout << "YES"; }
	else{ cout << "NO"; }
	cout << endl;
	return 0;
}
