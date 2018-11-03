#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int bigger,smaller;
	cin >> smaller;
	bigger = smaller;
	int b,s;
	//int pb, ps;
	//int biggerp, smallerp;
	//biggerp = bigger;
	//smallerp = smaller;
	//pb = 0;
	//ps = 0;
	b = 0;
	s = 0;
	for(int i = 1; i < n; i++){
		int w;
		cin >> w;
		if(bigger < w){
			bigger = w;
			b = i;
			/*if(biggerp == bigger)
				if(pb == 0) pb = i;
			else pb = i;*/
		}
		if(smaller >= w){
			smaller = w;
			s = i;
			/*if(smallerp == smaller)
				if(ps == 0) ps = i;
			else ps = i;*/
		}
	}
	if(b > s) cout << (b) + (n-(s+2));
	else cout << b + (n-(s+1));
	return 0;
}