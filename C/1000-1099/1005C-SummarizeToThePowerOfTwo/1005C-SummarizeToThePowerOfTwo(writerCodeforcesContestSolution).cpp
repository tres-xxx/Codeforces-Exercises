//solution posted by the writer (MikeMirzayanov) of the contest on Codeforces
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> c;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        c[a[i]]++;
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        bool ok = false;
        for(int j = 0; j < 31; j++){
            int x = (1 << j) - a[i]; //there is no a pow operation, just moves the 1 to the left
            if(c.count(x) && (c[x] > 1 || (c[x] == 1 && x != a[i]))){
                ok = true;
            }
        }
        if(!ok){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
