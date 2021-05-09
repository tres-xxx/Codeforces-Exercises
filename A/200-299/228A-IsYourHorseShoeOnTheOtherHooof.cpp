#include <iostream>
using namespace std;

int main() {
	int shoes = 0;
	long long color[4];
	cin >> color[0] >> color[1] >> color[2] >> color[3];
	if(color[0] == color[1] || color[0] == color[2] || color[0] == color[3]) shoes++;
	if(color[1] == color[2] || color[1] == color[3]) shoes++;
	if(color[2] == color[3]) shoes++;
	cout << shoes;
	return 0;
}