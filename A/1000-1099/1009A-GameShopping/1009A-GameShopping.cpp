#include <iostream>
using namespace std;

int main(){
    int n,m,games=0;
    cin >> n >> m;
    int *ci = new int[n];
    int *mi = new int[m];
    for(int i = 0; i < n; i++){
        cin >> ci[i];
    }
    for(int i = 0; i < m; i++){
        cin >> mi[i];
    }
    for(int i = 0,j = 0; i < n && j < m;){
        if(ci[i] <= mi[j]){
            games++;
            j++;
        }
        i++;
    }
    cout << games << endl;
    return 0;
}
