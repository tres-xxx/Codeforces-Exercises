#include <iostream>
using namespace std;

int main(){
	int n,m;
	cin >> n;
	int ai[n];
	for(int i = 0;i < n; i++){
		cin >> ai[i];
	}
	cin >> m;
	int bi[m];
	for(int i = 0;i < m; i++){
		cin >> bi[i];
	}
	bool found = false;
	bool nm = false;
	int ii,kk;
	int a,b;
	for(int i = 0;i < n && !nm; i++){
		for(int k = 0; k < m && !nm && !found; k++){
			int sum = ai[i] + bi[k];
			ii = 0; kk = 0;
			while(ii < n && !found){
				if(sum == ai[ii]){found = true;}
				ii++;
			}
			while(kk < m && !found){
				if(sum == bi[kk]){found = true;}
				kk++;
			}
			if(!found){a = ai[i];b = bi[k];nm=true;}
			found = false;
		}
	}
	cout << a << " " << b << endl;
	return 0;
}
