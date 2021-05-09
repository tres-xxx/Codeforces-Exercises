#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int a,b,c,db,dc,f;
    cin >> a >> b >> c;
    dc = c/4;
    db = b/2;
    if(db == 0 || dc == 0){
        cout << "0" << endl;
        return 0;
    }
    f = min(a,min(db,dc));
    f += (f*2)+(f*4);
    cout << f << endl;
    return 0;
}
