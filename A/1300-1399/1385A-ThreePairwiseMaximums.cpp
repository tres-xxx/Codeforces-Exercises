// I've some doubts on the problem so I based my answer on this solution
// https://github.com/SaruarChy/Codeforces-Solution/blob/master/1385%20A.%20Three%20Pairwise%20Maximums.cpp
#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	long long int t,x,y,z,i,n;
	cin >> t;
	string ans[t];
	string num[t];
	n = 0;
	for(i=0; i < t; i++){
		cin >> x >> y >> z; //x-a|y-b|z-c
		/*if(x == (max(x,y)) && y == (max(x,z)) && z == (max(y,z))){
			ans[i] = "YES";
		}
		else{ ans[i] = "NO"; }*/
		if(x > y){ swap(x,y);}
		if(x > z){ swap(x,z);}
		if(y > z){ swap(y,z);}
		if(y == z){ ans[i] = "YES"; num[n] = to_string(x)+" "+to_string(x)+" "+to_string(z);n++;}//ans[i]=ans[i]+" "+(char)y+" "+(char)z;}
		else{ ans[i] = "NO"; }
	}
	n = 0;
	for(i=0; i < t; i++){ cout << ans[i] << endl; if(ans[i] == "YES"){cout << num[n] << endl;n++;} }
	return 0;
}
