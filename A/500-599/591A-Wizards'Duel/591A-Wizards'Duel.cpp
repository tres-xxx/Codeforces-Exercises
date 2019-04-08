#include <iomanip>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	double c,h,v;
	cin >> c >> h >> v;
	double speed = c/(h+v);
	//double maxi;
	//if(c = max(h,v);
	cout << fixed << setprecision(12) << speed*h << endl;
	return 0;
}
