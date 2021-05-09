#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
	char word[1000]; //its better with a vector... maybe
	cin >> word;
	word[0] = toupper(word[0]);
	cout<<word;
	return 0;
}