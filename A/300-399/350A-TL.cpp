//This problem I could understand it thanks to the code posted by DinoysiosB on Github
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int max=0,min=100;
    short valid = 1;
    for(int i = 0; i < n; i++){ //positive
        int t;
        cin >> t;
        if(t > max){max=t;}
        if(t<min){min=t;}
    }
    if(n==1){min=max*2;}
    else{min = min*2;}
    for(int i = 0; i < m; i++){ //bad
        int t;
        cin >> t;
        if(t <= max || t <= min){valid=0; break;}
    }
    
    if(valid){
        if(max > min){cout << max;}
        else{cout << min;}
    }
    else{cout << "-1";}
    
    return 0;
}