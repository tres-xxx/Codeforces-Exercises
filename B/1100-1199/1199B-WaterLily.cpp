#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	double h,l;
	cin >> h >> l;
	cout << std::fixed;
	cout << std::setprecision(14) << ((l*l)-(h*h))/(2*h) << endl;
	return 0;
}
