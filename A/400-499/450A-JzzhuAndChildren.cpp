#include <iostream>
using namespace std;
 
int main() {
	int n, m;
	cin >> n >> m;
	int out = 0, hmtimes = 0;
	for( int i = 0; i < n; i++){
		int chcandie;
		cin >> chcandie;
		int hmtchild = chcandie/m; //amount of times the child is in the queue
		if(hmtchild > hmtimes){ //hmtimes is used to determine who is the last of all
			if(chcandie % m == 0)
				hmtimes = hmtchild-1;
			else hmtimes = hmtchild;
			out = i+1;			
		}
		else{
			if(hmtchild == hmtimes && chcandie % m != 0) out = i+1;
		}	
		
	}
	cout << out;
	return 0;
}