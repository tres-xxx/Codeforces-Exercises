//this code has been posted by fuwutu on Github
#include <iostream>
using namespace std;

int main(){
    int n,m,a,b;
    bool fire[1001] = {false};
    cin >> n >> m;
    while(m--){
        cin >> a >> b;
        fire[a] = true;
        fire[b] = true;
    }
    int x = 1;
    while(fire[x]){
        x++;
    }
    cout << n-1 << endl; //because is the minimum amount of connection between all the cities
    for(int i = 1; i < x ; i++){
        cout << i << " " << x << endl; // doesn't matter the 'distance' of the roots
    }
    for(int i = x+1; i <= n; i++){
        cout << x << " " << i << endl;
    }
    return 0;
}
