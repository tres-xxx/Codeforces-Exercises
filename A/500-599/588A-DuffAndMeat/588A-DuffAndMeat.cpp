#include <iostream>
using namespace std;

int main(){
    int n,minPrice,totalMeat,minMoney=0;
    cin >> n;
    int *ai = new int[n];
    int *pi = new int[n];
    cin >> ai[0] >> pi[0];
    minPrice = pi[0];
    minMoney += (ai[0]*minPrice);
    for(int i=1; i < n; i++){
        cin >> ai[i] >> pi[i];
        if(minPrice > pi[i]){
            minPrice = pi[i];
        }
        minMoney += (ai[i]*minPrice);
    }
    cout << minMoney << endl;
    return 0;
}
