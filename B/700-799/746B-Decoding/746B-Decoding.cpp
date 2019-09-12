#include <string.h>
#include <iostream>
using namespace std;

int main(){
	int n;
	/*string word;
	cin >> n >> word;*/
	cin >> n;
	char word[n];
	for(int i = 0; i < n; i++) cin >> word[i];
	int l,r;
	for(l = n-2; l >= 0; l = l-2){ cout << word[l];}
	if(l<(-1))l+=2;
	for(r = l+1; r < n; r = r+2){ cout << word[r];}
	cout << endl;
	return 0;
}
