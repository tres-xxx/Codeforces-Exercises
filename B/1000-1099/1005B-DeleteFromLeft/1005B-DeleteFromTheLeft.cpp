#include <string>
#include <iostream>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    int slength = s.size();
    int tlength = t.size();
    int same = 0;
    for(int i = slength, j = tlength; i > 0 && j > 0; ){
        if(s[i-1] == t[j-1]){
            same++;
        }
        else{
			break;
		}
        i--; j--;
    }
    cout << (slength-same) + (tlength-same) << endl;
    return 0;
}
