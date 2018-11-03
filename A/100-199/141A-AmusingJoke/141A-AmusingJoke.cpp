#include <iostream>
using namespace std;

int main() {
	char guest[100];
	char hoster[100];
	char check[100];
	cin >> guest >> hoster >> check;
	int found = 1;
	for(int i = 0; check[i]!='\0' && found < 2;i++){
		found = 0;
		if(check[i] != ' '){
			for(int j = 0; hoster[j] != '\0' && check[i] != ' '; j++){
				if(check[i] == hoster[j]){
					//cout << hoster[j];
					//cout << check[i];
					check[i] = ' '; 
					found = 1;
					hoster[j] = ' ';
				}
			}
		}
	}
	//cout << hoster;
	//cout << check;
	//cout << hoster;
	for(int i = 0; hoster[i] != '\0' && found < 2; i++)
		if(hoster[i] != ' ') found = 2;
	for(int i = 0; check[i]!='\0' && found < 2;i++){
		found = 0;
		if(check[i] != ' '){
			for(int j = 0; guest[j] != '\0' && check[i] != ' '; j++){
				if(check[i] == guest[j]){
					check[i] = ' '; found = 1;
					guest[j] = ' ';
				}
			}
		}
	}
	for(int i = 0; guest[i] != '\0' && found < 2; i++)
		if(guest[i] != ' ') found = 2;
	for(int i = 0; check[i] != '\0' && found < 2; i++)
		if(check[i] != ' ') found = 2;
	if(found < 2) cout << "YES";
	else cout << "NO";
	return 0;
}