#include <string>
#include <iostream>
using namespace std;

int main(){
    int n,subS=0,t;
    char subMax[2];
    string s;
    cin >> n >> s;
    subMax[0] = s[0];
    subMax[1] = s[1];
    for(int i = 0; i < (n-2); i++){
        t = 1;
        for(int j = i+1; (j+1) <= (n-1); j++){
            if(s[i] == s[j] && s[i+1] == s[j+1]) t++;
        }
        if(t > subS){
            subMax[0] = s[i];
            subMax[1] = s[i+1];
            subS = t;
            if(subS >= ((n-1)/2)) break;
        }
    }
    cout << subMax[0] << subMax[1] << endl;
    return 0;
}
