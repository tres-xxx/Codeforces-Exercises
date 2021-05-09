//solution posted by DionysiosB on Github
#include <string>
#include <iostream>
using namespace std;

int main(){
    //string upper = "qwertyuiop";
    //string middle = "asdfghjklñ;";
    //string lower = "zxcvbnm,./";
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string direction,input;
    cin >> direction >> input;
    short shiftpos = (direction[0] == 'R') ? (-1) : 1;
    int pos = 0;
    for(int i = 0; i < input.size(); i++){
        pos = keyboard.find(input[i]);
        cout << keyboard[pos+shiftpos];
    }
    cout << endl;
    return 0;
};
