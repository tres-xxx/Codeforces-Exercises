#include <string>
#include <iostream>
using namespace std;

int main(){
	long wn; 
	cin >> wn;
	string w;
	cin >> w;
	//int z,e,r,o,n;
	//z = e = r = o = n = 0;
	int z,n;
	z = n = 0;
	for(int i = 0; i < wn; i++){
		/*switch(w[i]){
			case 'z': z++;break;
			case 'e': e++;break;
			case 'r': r++;break;
			case 'o': o++;break;
			case 'n': n++;break;
		}*/
		if(w[i] == 'z'){
			z++;
		}
		if(w[i] == 'n'){
			n++;
		}
	}
	for(int i = 0; i < n; i++){
		cout << "1 ";
	}
	for(int i = 0; i < z; i++){
		cout << "0 "; 
	}
	cout << endl;
	return 0;
}
