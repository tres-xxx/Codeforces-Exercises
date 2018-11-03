#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *columns = new int[n];
    for(int i = 0; i < n; i++){
        cin >> columns[i];
    }
    sort(columns,columns+n);
    cout << columns[0];
    for(int i = 1; i < n; i++){
        cout << " " << columns[i];
    }
    cout << endl;
    return 0;
};
