#include <vector>
#include <iostream>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	vector <long long> m;
	long long id;
	bool f;
	for(int i = 0; i < n; i++){
		cin >> id;
		f = false;
		for(int j = 0; j < m.size(); j++){
			if(m[j] == id){
				f = true;
				break;
			}
		}
		if(!f){
			if(m.size() == k){
				m.pop_back();
			}
			m.insert (m.begin(),id);
		}
	}
	cout << m.size() << endl;
	for(int i = 0; i < m.size(); i++){
		cout << m[i] << " ";
	}
	cout << endl;
	return 0;
}
