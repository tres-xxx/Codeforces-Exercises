#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long n;
    cin >> n;
    long next_index = 1;
    long *test = new long[n];
    for(long i = 0; i < n; i++){
        cin >> test[i];
    }
    sort(test,test + n);
    for(; next_index <= n; next_index++){
        if(test[next_index-1] != next_index){
            break;
        }
    }
    cout << next_index << endl;
    return 0;
};
