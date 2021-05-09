#include <iostream>
using namespace std;

int main(){
    int n,m,m2,z,killed = 0;
    cin >> n >> m >> z;
    m2 = m;
    while(m2 <= z){
        if(m2%n == 0) killed++;
        m2+=m;
    }
    cout << killed << endl;
    return 0;
}
