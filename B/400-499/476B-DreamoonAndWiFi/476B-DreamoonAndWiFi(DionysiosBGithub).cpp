//this code has been wrote by DionysiosB and posted on Github
#include <cstdio>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

double myFact(int n){
    double output = 1;
    for(int p = 2; p <= n; p++)
        output *= p;
    return output;
}

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int desired = 0;
    int sure = 0;
    int uncertain = 0;
    for(int p = 0; p < s1.size(); p++){
        desired += (s1[p] == '+') ? 1 : -1;
        if(s2[p] == '?')
            uncertain++;
        else
            sure += (s2[p] == '+') ? 1 : -1;
    }
    int diff = abs(desired-sure);
    double probability;
    if(diff > uncertain || (diff%2 != uncertain%2)){
        probability = 0;
    }
    else{
        int dir = (uncertain + diff)/2;
        probability = myFact(uncertain) / myFact(dir) / myFact(uncertain-dir);
        for(int p = 0; p < uncertain; p++)
            probability /= 2.0;
    }
    cout << setprecision(12) << probability << endl;
    return 0;
}
