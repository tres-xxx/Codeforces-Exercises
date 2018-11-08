//this code it is based on the code posted by user kantuni on github.com
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long n;
    cin >> n; //amount of sides, vectors
    vector<unsigned long long> sides(n);
    for(long i = 0; i < n; i++) cin >> sides[i]; //sets all the lengths
    sort(sides.begin(), sides.end()); //non-decreasing order
    for(long i = 0; i < (n-2); i++){
        if(sides[i] + sides[i+1] > sides[i+2]){ //a<=b<=c<=d => a+b > c? a+b > d(is false if the first was it, so it gives a fast answer
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
