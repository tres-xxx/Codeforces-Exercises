// unfortunately I did not understand the problem :/
// so, this is the solution posted on the tutorial of the problem T.T
// https://codeforces.com/blog/entry/69464

#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

int main(){
	int t; // number of tests
	cin >> t;
	vector<int> answer(t);
	for(int i = 0; i < t; i++){
		int n; //number of days
		cin >> n;
		vector<int> a(n); //price at day n
		for(int j = 0; j < n; j++){
			cin >> a[j]; //set all values
		}
		int ans = 0; // sum of bad days
		int right_min = INT_MAX; // max number of int (not introduced)
		for(int j = n-1; j >= 0; j--){
			if(a[j] > right_min){
				ans++;
			}
			right_min = min(right_min, a[j]); // find the lowest number
		}
		answer[i] = ans;
	}
	for(int i = 0; i < t; i++){
		cout << answer[i] << endl;
	}
	return 0;
}
