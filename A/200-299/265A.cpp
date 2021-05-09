#include <string>
#include <iostream>
using namespace std;

int main(){
    string s;
    string t;
    cin >> s >> t;
    int position = 1;
    int max_s = s.size();
    int max_t = t.size();
    for(int i = 0,j=0; i < max_t && j < max_s;i++){
        if(t[i] == s[j]){
            position++;
            j++;
        }
    }
    cout << position << endl;
    return 0;
}