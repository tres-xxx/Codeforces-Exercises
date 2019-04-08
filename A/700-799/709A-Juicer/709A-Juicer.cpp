#include <iostream>
using namespace std;

int main(){
	int n,b,d;
	cin >> n >> b >> d;
	int ai[n];
	for(int i = 0; i < n; i++) cin >> ai[i]; 
	int juice = 0, waste = 0;
	for(int i = 0; i < n; i++){
		if(ai[i] <= b) juice += ai[i];
		if(juice > d){
			waste++;
			juice = 0;
		}		
	}
	cout << waste << endl;
	return 0;
}
