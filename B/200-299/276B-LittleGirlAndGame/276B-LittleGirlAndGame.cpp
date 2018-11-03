#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    const int alphabeth = 26;
    int amountLetters[alphabeth] = {0};
    
    for(int i = 0; i < s.size();i++ ) amountLetters[s[i] - 'a']++;
    int palynd = 0;
    for(int i = 0; i < alphabeth; i++)
        if(amountLetters[i] % 2 == 1) palynd++;
    
    if(palynd == 0 || palynd % 2 == 1) cout << "First";
    else cout << "Second";
    return 0;
}

//Solution by Dionisio
/*
#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    const int alphaLength = 26;
    int array[alphaLength] = {0};
    
    for(int k = 0; k < s.size(); k++){
        ++array[s[k] - 'a'];
    }
    int oddLetters(0);
    for(int k = 0; k < alphaLength; k++){
        if(array[k] % 2) ++oddLetters;
    }
    if(oddLetters == 0 || oddLetters%2 == 1)
        cout << "First";
    else cout << "Second";
    return 0;
}*/