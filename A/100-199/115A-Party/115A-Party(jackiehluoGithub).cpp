//this code has been posted by jackiehluo in Github
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *pi = new int[n+1];
    for(int i = 1; i <= n; i++){
        cin >> pi[i];
    }
    int r = 0;
    for(int i = 1; i <= n; i++){
        int j = 1, k = i;
        for(; pi[k] != -1; k = pi[k], j++);
        r = max(r, j);
    }
    cout << r << endl;
    return 0;
}
