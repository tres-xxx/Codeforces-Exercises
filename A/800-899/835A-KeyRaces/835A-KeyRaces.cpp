#include <iostream>
using namespace std;

int main(){
    int s,v1,v2,t1,t2,tLF,tLS;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    tLF = (t1*2) + (s*v1);
    tLS = (t2*2) + (s*v2);
    if(tLF < tLS) cout << "First";
    else{
        if(tLF > tLS) cout << "Second";
        else cout << "Friendship";
    }
    cout << endl;
    return 0;
}
