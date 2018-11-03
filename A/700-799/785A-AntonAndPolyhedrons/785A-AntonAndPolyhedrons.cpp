#include <string>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string polyhedron;
    long long faces = 0;
    for(int i = 0; i < n; i++){
        cin >> polyhedron;
        switch(polyhedron[0]){
            case 'T': faces += 4; break;
            case 'C': faces += 6; break;
            case 'O': faces += 8; break;
            case 'D': faces += 12; break;
            case 'I': faces += 20; break;
            default: cout << "error" << endl;break;
        }
    }
    cout << faces << endl;
    return 0;
}
