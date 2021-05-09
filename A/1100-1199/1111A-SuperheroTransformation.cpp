#include <string>
#include <iostream>
using namespace std;

int main(){
	string s,t;
	cin >> s >> t;
	bool hero = true;
	if(s.length() == t.length()){
		for(int i = 0; i < s.length(); i++){
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
				if(t[i] != 'a' && t[i] != 'e' && t[i] != 'i' && t[i] != 'o' && t[i] != 'u'){
					hero = false;
					break;
				}
			}
			else{
				if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u'){
					hero = false;
					break;
				}
			
			}			
		}
	}
	else hero = false;
	if(hero) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

/**
int vs,vt,cs,ct;
	vs=vt=cs=ct=0;
	bool hero = true;
	if(s.length() == t.length()){
		for(int i = 0; i < s.length(); i++){
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') vs++;
			else cs++;
			if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u') vt++;
			else ct++;		
		}
		if(vs != vt || cs != ct) hero = false;
	}
**/
