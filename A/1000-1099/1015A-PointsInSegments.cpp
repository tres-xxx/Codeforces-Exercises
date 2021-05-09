#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int coord[m+1] = {},points = 0;
    int l,r;
    for(int i = 0; i < n; i++){
        cin >> l >> r;
        for(; l <= r; l++){
            coord[l] = 1;
        }
    }
    for(int i = 1; i <= m; i++){
        if(coord[i] == 0) points++;
    }
    cout << points << endl;
    for(int i = 1; i <= m; i++){
        if(coord[i] == 0) cout << i << " ";
    }
    if(points != 0) cout << endl;
    return 0;
}
