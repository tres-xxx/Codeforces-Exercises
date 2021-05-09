#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int board[n];
	for(int i = 0; i < n; i++){
		cin >> board[i];
	}
	sort(board,board+n);
	if(n%2 == 0){ cout << board[(n/2)-1]; }
	else{ 
		if(n == 1){ cout << board[0];}
		else{cout << board[n/2]; }
	}
	cout << endl;
	return 0;
}
