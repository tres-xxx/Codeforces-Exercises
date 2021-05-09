#include <iostream>
using namespace std;

int main() {
	char name[100];
	cin >> name;
	char check[100];
	int position = 0;
	for(int i = 0; name[i] != '\0'; i++){
		int found = 1;
		for(int j = 0; check[j] != '\0'; j++)if(name[i] == check[j]) found = 0;
		if(found == 1){
			check[position] = name[i];
			position++;
			check[position] = '\0';
		}
	}
	if(position % 2 == 0) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!"
	return 0;
}