#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		map<char, int> ab = {
			{'a',0},
			{'b',0},
			{'c',0},
			{'d',0},
			{'e',0},
			{'f',0},
			{'g',0},
			{'h',0},
			{'i',0},
			{'j',0},
			{'k',0},
			{'l',0},
			{'m',0},
			{'n',0},
			{'o',0},
			{'p',0},
			{'q',0},
			{'r',0},
			{'s',0},
			{'t',0},
			{'u',0},
			{'v',0},
			{'w',0},
			{'x',0},
			{'y',0},
			{'z',0}
		};
		string s;
		cin >> s;
		int d = 0;
		//int mxd = 0, mnd = 50;
		int tg = 0;
		int dout = 0;
		for (int j = 0; j < s.size();j++){ ab[s[j]]++; }
		for (const auto& m : ab){
			if(m.second != 0){ 
				d++; // amount of letters
				if(m.second > 1){
					tg++; // amount of letters greater than one
					//mxd = max(mxd,m.second);
					//mnd = min(mnd,m.second);
				}
			}
		}
		dout = d/2;
		if(tg != 0){
			if(d%2 == 0 or tg%2 == 0){
				dout += (tg/2);
			}else{
				dout += ((tg/2)+1);
			}
		}
		cout << dout << endl;
		/*
		int r,g,d;
		r = g = 0;
		d = 0;
		// left-right
		for(int j = 1; j < s.size();){
			if(s[j-1] != s[j]){
				r++;g++;
			}
			else{
				if(g > r){
					r++;
				}else{ g++; }
			}
			j = j+2;
		}
		if(s.size() % 2 != 0){
			if(g < r){ g++; }
			else{ r++; }
		}
		cout << min(g,r) << endl;
		*/
	}
	return 0;
}
