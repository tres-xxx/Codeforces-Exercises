#include <iostream>
using namespace std;

int main(){
    int n,games=0;
    cin >> n;
    int hi[101]={0};
    int ai[101]={0};
    for(int i = 0; i < n; i++){
        int guest;
        int host;
        cin >> host >> guest;
        hi[host]++;
        ai[guest]++;
    }
    
    for(int i = 0; i <= 100; i++)
        if(hi[i] != 0 && ai[i] != 0)
            games += hi[i]*ai[i];
    
    cout << games; 
    return 0;
}