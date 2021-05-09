#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t,b,p,f,c,h;
	cin >> t;
	int maxi[t] = {};
	int pmax,fmax,divb;
	for(int i = 0; i < t; i++){
		cin >> b >> p >> f;
		cin >> c >> h;
		divb = b/2;
		if(divb < p){
			pmax = divb*c;
		}
		else{
			pmax = ((divb-p)>f) ? f*h : (divb-p)*h; 
			pmax += (p*c);
		}
		if(divb < f){
			fmax = divb*h;
		}
		else{
			fmax = ((divb-f)>p) ? p*c : (divb-f)*c; 
			fmax += (f*h);
		}
		//cout << divb << endl;
		//cout << fmax << " " << pmax << endl;
		if(fmax == pmax){maxi[i] = fmax;}
		else{maxi[i] = max(fmax,pmax);}
		//maxi[t] = max(((d(b/2))>p))*c,(f/(b/2))*h);
	}
	for(int i = 0; i < t; i++){
		cout << maxi[i] << endl;
	}
	return 0;
}
