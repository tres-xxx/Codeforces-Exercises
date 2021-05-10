#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	long long n,x,y,x2,y2,xt,yt,sm;
	cin >> n;
	/* Mine, as usual it does not work!
	xt = yt = 0;
	for(int i = 0; i < n; i++){
		cin >> x >> y;
		if(xt <= x){
			if(yt <= y || xt <= y){
				xt = x;
				yt = y;
			} 
		}
		else{
			if(yt <= y){
				if(xt <= x || yt <= x){
					xt = x;
					yt = y;
				}
			}
		}
	}
	//cout << xt << " " << yt << endl;
	sm = min(xt,yt)+(max(xt,yt));*/
	
	// based on this solution https://github.com/kantuni/Codeforces/blob/master/1047B/cover-points.cpp
	sm = 0;
	for(int i = 0; i < n; i++){
		cin >> x >> y;
		sm = max(sm, x+y);
	}
	cout << sm << endl;
	return 0;
}
