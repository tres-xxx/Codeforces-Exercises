#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	string ans[t];
	for(int i = 0; i < t; i++){
		int n;
		cin >> n;
		char task[n];
		for(int j = 0; j < n; j++){cin >> task[j]; }
		int next; 
		bool firstD = false;
		bool susp = false;
		for(int j = 0; j < n-1;){
			for(int k = j+1; k < n; k++){
				if(!firstD){
					if(task[k] != task[j]){ next = k; firstD = true;}
				}
				else{
					if(task[k] == task[j]){ susp = true; break; }
				}
			}
			if(susp){ break; }
			else{ 
				if(j == next){ j = n; }
				else{ j = next; firstD = false; }
			}
		}
		if(susp){ ans[i] = "No"; }
		else{ ans[i] = "Yes"; }
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
