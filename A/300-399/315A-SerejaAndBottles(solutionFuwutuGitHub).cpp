//based in fuwutu's code GitHub

#include <iostream>
using namespace std;

int main(){
    int n; //number of bottles
    cin >> n;
    int a[1001],b[1001],c[1001] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        c[b[i]]++;
    }
    int total = 0;
    for(int i = 0; i < n; i++){
        c[b[i]]--;
        if(c[a[i]] == 0){
            total++;
        }
        c[b[i]]++;
    }
    cout << total << endl;
    
    return 0;
}