//solution posted in http://www.voidcn.com/article/p-kfwvuyra-gr.html

#include <iostream>
using namespace std;

int main(){
	long long n,m;
	cin >> n >> m;
	
	if(n == 1){
		cout << m << endl;
		return 0;
	}
	if(n%2 == 0){ //even
		if(m > (n/2)) cout << m-1;
		else cout << m+1;
	}
	else{ //odd
		if(m >= ((n+1)/2)) cout << m-1;
		else cout << m+1;
	}
	cout << endl;
	
	return 0;
}
