#include <string.h>
#include <iostream>
using namespace std;

int main(){
	string n;
	cin >> n;
	bool sw = false;
	int index=n.size()-1,p1,p2=n[n.size()-1]-48;
	for(int i = n.size()-1; i >= 0; i--){
		if((n[i]-48)%2 == 0){
			p1 = n[i]-48;
			if(p1 < p2){
				index = i;
			}
			else{
				if(!sw) index = i;
			}
			sw = true;
		}
	}
	if(sw){
		char t = n[n.size()-1];
		n[n.size()-1] = n[index];
		n[index] = t;
		cout << n;
	}
	else
		cout << "-1";
	cout << endl;
	return 0;
}
