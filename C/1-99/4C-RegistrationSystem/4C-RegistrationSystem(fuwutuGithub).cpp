//Code by fuwutu Github

#include <string>
#include <map>
#include <iostream>
using namespace std;

int main(){
    long n; //amount of registers
    cin >> n;
    map<string, int> database; //set the register
    string s; //variable to get each register
    while(n--){
        cin >> s; //set the register introduced to the variable 's'
        if(database.count(s) == 0){
            cout << "OK" << endl;
            database[s] = 1; //set 1 if there is a register with the same string and also the new string
        }
        else{
            cout << s << database[s] << endl; //first case it is already 1
            database[s]++; //Addition by one for the next same string
        }
    }
    return 0;
};
