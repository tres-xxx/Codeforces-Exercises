#include <iostream>
using namespace std;

int main(){
	int n,x=0;
	char c = 'X';
	cin >> n;
	char m[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) 
			cin >> m[i][j];
	
	for(int i = 1; i < n-1; i++){
		for(int j = 1; j < n-1; j++){
			if(m[i][j] == c && m[i-1][j-1] == c && m[i-1][j+1] == c && m[i+1][j-1] == c && m[i+1][j+1] == c)
				x++;
		}
	}
	cout << x << endl;
	return 0;
}
