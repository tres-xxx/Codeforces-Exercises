#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *xi = new int[n];
    for(int i = 0; i < n; i++){
        cin >> xi[i];
    }
    int q;
    cin >> q;
    int *mi = new int[q];
    for(int i = 0; i < q; i++){
        cin >> mi[i];
    }
    sort(xi,xi+n);
    int places;
    for(int i = 0; i < q; i++){
        places = 0;
        for(int j = 0; j < n; j++){
            if(mi[i] >= xi[j]){
                places++;
            }
            else{
                break;
            }
        }
        cout << places << endl;
    }
    return 0;
}
