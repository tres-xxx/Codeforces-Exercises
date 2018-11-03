//this code has been written by jackiehluo and posted on Github
#include <iostream>
using namespace std;

int  main(){
    int n,m,t,sum = 0;
    cin >> n;
    int *counts = new int[n];
    for(int i = 0; i < n; i++){
        cin >> t;
        sum += t;
        counts[i] = sum;
    }
    int ind = 0, *worms = new int[sum + 1];
    for(int i = 1; i <= sum; i++){ //the number in the array has the number of the label assigned
        if(i > counts[ind]){
            ind++;
        }
        worms[i] = ind + 1;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> t;
        cout << worms[t] << endl;
    }
    return 0;
}
