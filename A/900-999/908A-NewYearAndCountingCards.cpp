#include <string>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int min = 0;
    for(int i = 0; i < s.size(); i++){
        switch(s[i]){
            case '1': case '3': case '5': case '7': case '9':
            case 'a': case 'e': case 'i': case 'o': case 'u':
            min++; break;
            default: break;
        }
    }
    cout << min << endl;
    return 0;
}
