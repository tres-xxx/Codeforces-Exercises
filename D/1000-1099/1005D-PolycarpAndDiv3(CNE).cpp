#include <string>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int temp;
    int temp_sum = 0;
    int maxdiv = 0;
    for(int i = 0; i < s.size(); i++){
        temp = s[i]-48;
        temp_sum = (temp_sum*10) + temp;
        if(temp%3 == 0 || temp_sum%3 == 0){
            maxdiv++;
            temp_sum = 0;
        }
    }
    cout << maxdiv << endl;
    return 0;
}
