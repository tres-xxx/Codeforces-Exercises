#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t){
		int rating = 0;
		cin >> rating;
		if (rating >= 1900){ cout << "Division 1" << endl; }
		else{
		if (1600 <= rating && rating <= 1899){ cout << "Division 2" << endl; }
		else{
		if (1400 <= rating && rating <= 1599){ cout << "Division 3" << endl; }
		else{ cout << "Division 4" << endl; }
		}
		}
		t--;
	}
	return 0;
}
