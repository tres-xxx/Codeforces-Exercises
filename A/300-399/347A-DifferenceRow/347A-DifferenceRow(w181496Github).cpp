//code writed by w181496 on Github
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main(){
    int n,t[101]; //t[101] because 100 is the maximum number that can be n
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t[i];
    }
    sort(t, t+n);
    cout << t[n-1]; //print the last number in which at the moment of add the smallest one the sum will be the biggest
    for(int i = 1; i < (n-1); i++){
        cout << " " << t[i];
    }
    cout << " " << t[0] << endl;
    return 0;
};
