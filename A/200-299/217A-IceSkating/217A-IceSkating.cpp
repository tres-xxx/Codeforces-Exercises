// I couldn't do it
// Solution from https://github.com/DionysiosB/CodeForces/blob/master/200-299/217A-IceSkating.cpp

#include <vector>
#include <iostream>
using namespace std;

struct snow_drift{
	int x, y;
	bool v;
	snow_drift(int a, int b): x(a), y(b), v(0) {};
};
std::vector <snow_drift> array; // positions of the snow drift

void search(int start, int end){
	if(array[start].v == 1){
		return; 
	}
	array[start].v = 1;
	for(int p = 0; p < end; p++){
		if(array[p].x == array[start].x || array[p].y == array[start].y){
			search(p, end); // find all coincidences of the positions
		}
	}
}

int main(){
	
	int n;
	cin >> n;
	int x,y;
	for(int i = 0; i < n; i++){
		cin >> x >> y;
		array.push_back(snow_drift(x,y)); // insert snow drift
	}
	int snow = 0;
	for(int i = 0; i < n; i++){
		if(array[i].v > 0){
			continue;
		}
		snow++;
		search(i, n);
	}
	snow--;
	cout << snow << endl;
	return 0;
}
