#include <iostream>
using namespace std;

int main(){
	int n,found = 0;
	cin >> n;
	int position[n][2]; //0 == x ; 1 == y
	for(int i=0; i < n; i++)
		cin >> position[i][0] >> position[i][1];
	
	for(int i = 0; i < n; i++){
		int thereIs [] ={0,0,0,0}; //right,left,up,down
		for(int j = 0; j < n; j++){
			if(position[i][0] < position[j][0] && thereIs[0] == 0 && position[i][1] == position[j][1]) thereIs[0] = 1;
			if(position[i][0] > position[j][0] && thereIs[1] == 0 && position[i][1] == position[j][1]) thereIs[1] = 1;
			if(position[i][1] < position[j][1] && thereIs[2] == 0 && position[i][0] == position[j][0]) thereIs[2] = 1;
			if(position[i][1] > position[j][1] && thereIs[3] == 0 && position[i][0] == position[j][0]) thereIs[3] = 1;
		}
		if(thereIs[0] == 1 && thereIs[1] == 1 && thereIs[2] == 1 && thereIs[3] == 1)
			found++;
	}
	cout << found;

}