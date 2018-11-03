#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n,m,pairs=0;
    cin >> n;
    int *an = new int[n];
    for(int i = 0; i < n; i++){
        cin >> an[i];
    }
    cin >> m;
    int *bm = new int[m];
    for(int i = 0; i < m; i++){
        cin >> bm[i];
    }
    sort(an,an+n);
    sort(bm,bm+m);
    int in=0,im=0;
    for(; in < n; in++){
        for(int j = im; j < m; j++){
            if(an[in] == bm[j] || an[in] == (bm[j]+1) || an[in] == (bm[j]-1)){
                pairs++;
                im=j+1;
                break;
            }
        }
    }
    cout << pairs << endl;
    return 0;
}
