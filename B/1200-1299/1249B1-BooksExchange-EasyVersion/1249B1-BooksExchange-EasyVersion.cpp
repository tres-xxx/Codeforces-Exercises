#include <iostream>
#include <vector>
using namespace std;

int main(){
	int q,n,d,dd;
	cin >> q;
	vector < vector <int> > k;
	for(int i = 0; i < q; i++){
		cin >> n;
		vector<int> t;
		int pi[n+1];
		for(int j = 1; j <= n; j++){
			cin >> pi[j];
		}
		for(int w = 1; w <= n; w++){
			d = 1;
			dd = w;
			for(int y = 1; y <= n; y++){
				if(pi[dd] == w){break;}
				else{ d++; dd = pi[dd];}
			}
			t.push_back(d);
		}
		k.push_back(t);
	}

	for(int i = 0; i < q; i++){
		for(int j = 0; j < k[i].size(); j++){
			cout << k[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
