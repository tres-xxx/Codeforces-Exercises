#include <iostream>
using namespace std;

int main(){
	long n;
	cin >> n;
	int room[10] = {};
	char o;
	for(int i = 0; i < n; i++){
		cin >> o;
		if(o == 'L'){
			for(int j = 0; j < 10; j++){
				if(room[j] == 0){
					room[j] = 1;
					break;
				}
			}
		}
		else{
			if(o == 'R'){
				for(int j = 9; j >= 0; j--){
					if(room[j] == 0){
						room[j] = 1;
						break;
					}
				}
			}
			else{
				room[o-48] = 0;
			}
		}
	}
	for(int i = 0; i < 10; i++){
		cout << room[i];
	}
	cout << endl;
	return 0;
}
