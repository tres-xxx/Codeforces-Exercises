#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string pangram;
    cin >> pangram;
    if(n < 26){
        cout << "NO" << endl;
    }
    else{
        int alphabet[27] = {};
        int count = 0;
        transform(pangram.begin(), pangram.end(), pangram.begin(),(int (*)(int))tolower);
        for(int i = 0; i < n && count < 26; i++){
            if(alphabet[pangram[i]-97] == 0){
                alphabet[pangram[i]-97]++;
                count++;
            }
        }
        if(count == 26){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
};
