//code wroted by DionysiosB on Github
#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    long n;
    cin >> n;
    long best = 0, current = 0, total = 0;
    long previousB = 0, previousA = 0;
    for(int i = 0; i < n; i++){
        previousB = previousA;
        previousA = current;
        cin >> current;
        if(current == (previousA + previousB) || total <= 1){
            total++;
            if(total > best){
                best = total;
            }
        }
        else{
            total = 2;        
        }
    }
    cout << best << endl;
    return 0;
};
