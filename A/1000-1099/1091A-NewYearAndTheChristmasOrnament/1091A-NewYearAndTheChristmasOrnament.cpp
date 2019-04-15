#include <iostream>
using namespace std;

int main(){
	int y,b,r;
	cin >> y >> b >> r;
	int balls;
	if(y < b){
		if(b < r) balls = (y*3)+3;
		else{
			if(r <= (y+2)) balls = ((r-2)*3)+3;
			else balls = (y*3)+3;
		}
	}
	else{
		if(b < r) balls = ((b-1)*3)+3;
		else{
			if(r <= (b+1)) balls = ((r-2)*3)+3;
			else balls = ((b-1)*3)+3;
		}
	}
	cout << balls << endl;
	return 0;
}
