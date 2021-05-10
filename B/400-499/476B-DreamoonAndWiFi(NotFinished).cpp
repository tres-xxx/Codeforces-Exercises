#include <cmath>
#include <string>
#include <iostream>
using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int real_pos = 0;
    int recognizable = 0;
    int unknown = 0;
    for(long long int i = 0; i < s1.size(); i++){
        if(s1[i] == '+')
            real_pos++;
        else
            real_pos--;
        if(s2[i] == '+' || s2[i] == '-'){
            if(s2[i] == '+')
                recognizable++;
            else
                recognizable--;
        }
        else
            unknown++;
    }
    long double probability;
    if(abs(real_pos) == abs(recognizable+unknown))
    return 0;
}
