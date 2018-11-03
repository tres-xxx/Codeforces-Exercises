#include <string>
#include <iostream>
using namespace std;

int main(){
    string a,b,bigSt,smaSt,sT;
    a = {};
    b = {};
    cin >> a >> b;
    bool max;
    long long bigLen,smaLen,t,tt;
    bigLen = a.size();
    smaLen = b.size();
    if(bigLen == 0 || smaLen == 0){ // there is an empty string???
        if(bigLen != 0){
            cout << bigLen << endl;
        }
        else{ cout << smaLen << endl; }
        return 0;
    }
    if(bigLen > smaLen){ // a => bigger
        bigSt = a; smaSt = b;
    }
    else{ 
        bigSt = b; smaSt = a;
        //t = a;
        bigLen = smaLen;
        smaLen = bigLen;
    }
    long long subSt = 0;
    long long worstS = 0; //the worst way to search
    for(long long worstS = 0; subSt < (bigLen/2) && worstS < smaLen; worstS++){
        t = 0;
        tt = worstS;
        for(long long i = 0; i < bigLen && tt < smaLen; i++){ //just checks a substring in order
            if(bigSt[i] != smaSt[tt]){
                t++; //substring
                tt++; //index position
            }
        }
        if(t > subSt) subSt = t;
    }
    if(subSt != 0) cout << subSt;
    else cout << "-1";
    cout << endl;
    return 0;
}
