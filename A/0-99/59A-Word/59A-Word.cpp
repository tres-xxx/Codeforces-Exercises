#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
	char letters[100];
	cin >> letters;
	int low,high;
	low = 0;
	high = 0;
	for(int i = 0; i < 100 && letters[i] != '\0'; i++){
		if(isupper(letters[i]) == 0) low++;
		else high++;
	}
	if(low > high || low == high){
		for(int i = 0; i<100 && letters[i] != '\0';i++)
			letters[i] = tolower(letters[i]);
	}
	else{
		for(int i = 0; i<100 && letters[i] != '\0';i++)
			letters[i] = toupper(letters[i]);
	}
	cout << letters;
	return 0;
}