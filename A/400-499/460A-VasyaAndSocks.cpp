#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int days = n;
    for(int i = m;i <= days ;i=i+m){
        days++;
    }
    cout << days << endl;
    return 0;
};
