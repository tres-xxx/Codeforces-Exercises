#include <iostream>
using namespace std;

int main(){
	int n,l1,r1,l2,r2;
	cin >> n;
	int q2[n][2];
	for(int i = 0; i < n; i++){
		cin >> l1 >> r1 >> l2 >> r2;
		if(l1 != l2){
			q2[i][0] = l1;
			q2[i][1] = l2;
		}
		else{
			if(l1 != r2){
				q2[i][0] = l1;
				q2[i][1] = r2;
			}
			else{
				q2[i][0] = r1;
				q2[i][1] = l2;
			}
		}
	}
	for(int i = 0; i < n; i++)
		cout << q2[i][0] << " " << q2[i][1] << endl;
	return 0;
}
