//This code has been posted by DionysiosB on github.com
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    string burger;
    cin >> burger;
    long long nB,nS,nC;
    nB = nS = nC = 0;
    for(int i = 0; i < burger.size(); i++){
        if(burger[i] == 'B')
            nB++;
        else{
            if(burger[i] == 'S')
                nS++;
            else
                nC++;
        }
    }
    long long haveB,haveS,haveC;
    long long priceB, priceS, priceC;
    cin >> haveB >> haveS >> haveC;
    cin >> priceB >> priceS >> priceC;
    long long budget;
    cin >> budget;
    long long currentMin,currentMax;
    currentMin = 0;
    currentMax = 10000000000000; //10^13
    while(currentMin+1 < currentMax){
        long long middle = (currentMin + currentMax)/2;
        long long costB = priceB*((nB*middle > haveB) ? (nB*middle-haveB) : 0);
        long long costS = priceS*((nS*middle > haveS) ? (nS*middle-haveS) : 0);
        long long costC = priceC*((nC*middle > haveC) ? (nC*middle-haveC) : 0);
        long long cost = costB + costS + costC;
        if(cost <= budget)
            currentMin = middle;
        else
            currentMax = middle;
    }
    cout << currentMin << endl;
    return 0;
}
