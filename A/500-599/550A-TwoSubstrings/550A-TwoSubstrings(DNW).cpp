#include <string>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool ab = false,ba = false,inside=false;
    for(int i = 0; i < (s.size() - 1) && (!ab || !ba); i++){
        if(s[i] == 'A' || s[i] == 'B'){        
            if(s[i] == 'A' && s[i+1] == 'B' && !ab){
                ab = true;
                inside = true;
            }
            if(s[i] == 'B' && s[i+1] == 'A' && !ba){
                ba = true;
                inside = true;
            }
            if(inside){
                i++;
                inside = false;
            }
        }
    }
    if(ab && ba){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
