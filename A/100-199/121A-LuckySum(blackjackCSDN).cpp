//code posted by blackjack on CSDN

#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

long long bi[5000], sum = 0;
int z = 0;

void da(long long co){
    if(co > 1000000000){
        return;
    }
    long long te = co*10+4;
    bi[z++] = te;
    da(te);
    te = co*10+7;
    bi[z++] = te;
    da(te);
};

int main(){
    da(0); //it fills the array bi
    sort(bi, bi + z);
    int st, en, z1 = 0;
    int s1, s2;
    cin >> st >> en;
    while(bi[z1] < st){
        z1++;
    }
    s1 = z1; //saves the start position on the array bi
    while(bi[z1] < en){
        z1++;
    }
    s2  = z1; //saved the end position on the array bi
    if(s1 == s2){
        sum = bi[s1] * (en-st+1);
    }
    else{
        sum = sum + bi[s1] * (bi[s1]-st+1);
        int i;
        for(i = s1+1; i <= s2; i++){
            sum = sum + (bi[i]-bi[i-1])*bi[i];
        }
        sum = sum - bi[s2] * (bi[s2]-en);
    }
    cout << sum << endl;
    return 0;
};
