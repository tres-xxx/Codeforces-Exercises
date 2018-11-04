//with the help of the code posted by fuwutu - Github
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n; //size permutation
    cin >> n;
    long *a_i = new long[n];
    for(int i = 0; i < n; i++){
        cin >> a_i[i]; //get the elements
    }
    sort(a_i,a_i+n); //order the array
    long long mm = 0; //minimum movements permutation
    for(int i = 1; i <= n; i++){
        mm = mm + abs(i - a_i[i-1]);
    }
    cout << mm;
    return 0;
}