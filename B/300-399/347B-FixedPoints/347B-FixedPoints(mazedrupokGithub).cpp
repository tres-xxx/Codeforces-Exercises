//code posted by mazedrupok on Github
#include <iostream>
using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == i) cnt++;
    }
    bool temp = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != i){
            if(a[a[i]] == i){
                cnt += 2;
                temp = 1;
                break;
            }
        }
    }
    if(temp == 0 && cnt != n) cnt++;
    cout << cnt << endl;
    return 0;
}
