//this code has been done by DionysiosB and posted on github.com

#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> addDigits(vector<int> pr, int intp){
    vector<int> outp(pr);
    switch(intp){
        case 2:
        case 3:
        case 5:
        case 7: outp.push_back(intp);break;
        case 4: outp.push_back(2); outp.push_back(2); outp.push_back(3); break;
        case 6: outp.push_back(3); outp.push_back(5);break;
        case 8: outp.push_back(2); outp.push_back(2); outp.push_back(2); outp.push_back(7); break;
        case 9: outp.push_back(2); outp.push_back(3); outp.push_back(3); outp.push_back(7); break;
        default: break;
    }

    return outp;
}

int main(){
    int n;
    cin >> n;
    string number; 
    cin >> number;
    vector<int> digits;
    for(int i = 0; i < n; i++){
        digits = addDigits(digits, number[i] - '0');
    }
    sort(digits.rbegin(), digits.rend());
    for(int i = 0; i < digits.size(); i++){
        cout << digits[i];
    }
    cout << endl;
    return 0;
}
