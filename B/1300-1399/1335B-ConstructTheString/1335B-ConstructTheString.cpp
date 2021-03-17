#include <string>
#include <iostream>
using namespace std;

int main(){
	int t,n,a,b,p; 
	cin >> t;
	string s[t];
	char l[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for(int i = 0; i < t; i++){
		cin >> n >> a >> b;
		p = 0;
		b--; // b = 1 = [0]
		string w,w2;
		int j = 0;
		for(; j <= b; j++){ w = w+l[j]; } // first distinct numbers
		if(j > (a/2)){
			int jj;
			jj = j-2; // previous to the last one 
			for(; j < a; j++){ w = w + w[jj]; jj--; } // reverse 
		}
		else{
			int jj = j;
			j--; // set last one
			for(;jj < (a-j); jj++){ w = w + w[j]; } // repeat last number
			j--;
			for(;jj < a; jj++){ w = w+w[j]; j--; } // reverse
		}
		w2 = w;
		for(j = 1; j < (n/a); j++){ w.append(w2); } // copy itself
		if(n%a != 0){ 
			for(j = 0; j < (n%a); j++){ w = w+w2[j]; } // complete the distinct numbers
		}
		s[i] = w;
	}
	for(int i = 0; i < t; i++){ cout << s[i] << endl; }
	return 0;
}
