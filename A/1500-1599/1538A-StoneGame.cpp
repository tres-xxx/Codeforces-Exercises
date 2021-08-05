#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ai[n];
		int g[2] = {},l[2] = {};
		l[0] = n+1;
		for(int i = 0; i < n; i++){ 
			cin >> ai[i];
			if(ai[i] > g[0]){ g[0] = ai[i]; g[1] = i;}
			if(ai[i] < l[0]){ l[0] = ai[i]; l[1] = i;}
		}
		int moves = 0;
		int nbr,nbl;
		bool dg,dl;
		dg = dl = false;
		int div = (n%2 == 0) ? n/2 : (n/2)+1;
		if(g[1] < l[1]){ 
			if(g[1] < ((n-1) - l[1])){ moves += (g[1]+1); nbl = g[1]+1; nbr = n-1; dg = true; }
			else{ moves += (n-l[1]); nbl = 0; nbr = l[1]-1; dl = true; }
		}
		else{
			if(l[1] < ((n-1) - g[1])){ moves += (l[1]+1); nbl = l[1]+1; nbr = n-1; dl = true; }
			else{ moves += (n-g[1]); nbl = 0; nbr = g[1]-1; dg = true; }
		}
		//cout << moves << endl;
		//cout << nbl << " " << nbr << endl;
		if(dg){
			if((l[1] - nbl) < (nbr - l[1])){ moves += (l[1]-nbl); }
			else{ moves += (nbr-l[1]); }
		}
		else{
			if((g[1] - nbl) < (nbr - g[1])){ moves += (g[1]-nbl); }
			else{ moves += (nbr-g[1]); }		
		}
		moves++;
		cout << moves << endl;
		
	}
 	return 0;
}
