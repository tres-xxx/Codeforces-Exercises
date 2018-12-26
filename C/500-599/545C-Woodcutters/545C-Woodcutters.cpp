//this solution is the code posted by msdeep14 on github.com
//#include <utility>
//#include <climits>
#include <iostream>
using namespace std;

int main(){
	/*
	//--- My own solution does not work, great programmer! hurray!
	int n;
	cin >> n;
	pair<long long, long long> xi[n];
	for(int i = 0; i < n; i++)
		cin >> xi[i].first >> xi[i].second;
	if(n <= 2){
		cout << n << endl;
		return 0;
	}
	long long treeF = 2; //first tree always falls and the last one too
	long long le,ri,d;
	long long tF2 = 2;
	bool right = false,right2 = false;
	le = ri = 0;
	for(int i = 1,i2 = n-2; i < n-1; i++){
		le = xi[i].first - xi[i].second;
		ri = xi[i].first + xi[i].second;
		if(!right){
			if(le > xi[i-1].first){
				treeF++;
			}
			else{
				if(ri < xi[i+1].first){
					right = true;
					treeF++;
				}
			}
		}
		else{
			if(ri < xi[i+1].first){
				treeF++;
			}
			else{
				right = false;
			}
		}
		
		le = xi[i2].first - xi[i2].second;
		ri = xi[i2].first + xi[i2].second;
		if(!right2){
			if(ri < xi[i2+1].first){
				tF2++;
			}
			else{
				if(le > xi[i2-1].first){
					tF2++;
					right2 = true;
				}
			}
		}
		else{
			if(le > xi[i2-1].first){
				tF2++;
			}
			else{
				right2 = false;
			}
		}
		i2--;
	}
	if(tF2 > treeF) treeF = tF2;
	cout << treeF << endl;*/
	int n,count=2;
	cin >> n;
	int arr[n+1], brr[n+1];
	for(int i = 0; i < n; i++){
		cin >> arr[i] >> brr[i];
	}
	for(int i = 1; i < n-1; i++){
		if((arr[i] - arr[i-1]) > brr[i]) count++;
		else{
			if((arr[i+1] - arr[i]) > brr[i]){
				count ++;
				arr[i] += brr[i];
			}
		}
	}
	if(n == 1) cout << "1";
	else cout << count;
	cout << endl;
	return 0;
}
