#include <iostream>
using namespace std;

int main(){
	long n;
	cin >> n;
	int ai[n];
	int count = 0, t = 0;
	for(int i = 0; i < n; i++){
		cin >> ai[i];
		if(ai[i] == 1)
			t++;
		else 
			t = 0;
		if(t > count) count = t;
	}
	if(ai[0] == 1 && ai[n-1] == 1 && count < (n/2)){
		int i = 0;
		t = 0;
		while(ai[i] != 0){
			t++;
			i++;
		}
		i = n-1;
		while(ai[i] != 0){
			t++;
			i--;
		}
		if(t > count) count = t;
	}
	cout << count << endl;
	return 0;
}
