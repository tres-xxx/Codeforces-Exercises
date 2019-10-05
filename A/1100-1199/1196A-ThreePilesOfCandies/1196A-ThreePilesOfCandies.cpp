#include <iostream>
using namespace std;

int main(){
	int q;
	cin >> q;
	long long qi[q],p[3];
	int odd = 0;
	long long sum;
	for(int i = 0; i < q; i++){
		sum = 0;
		//qi[i] = 0;
		//odd = 0;
		for(int j = 0; j < 3; j++){
			cin >> p[j];
			//if(p[j]%2 == 1){ odd++;}
			//qi[i] += (p[j]/2);
			sum += p[j];
		}
		//cout << sum/2 << endl;
		qi[i] = sum/2;
		//if(odd == 2){qi[i]++;}
		//if(odd == 3){qi[i]+=2;}
	}
	for(int i = 0; i < q; i++){
		cout << qi[i] << endl;
	}
	return 0;
}
