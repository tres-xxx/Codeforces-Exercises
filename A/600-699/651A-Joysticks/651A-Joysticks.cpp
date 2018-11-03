#include <iostream>
using namespace std;

int main(){
    int j1,j2;
    cin >> j1 >> j2;
    int ti = 0;
    if(j1 > 1 || j2 > 1){
        while(j1 > 0 && j2 > 0){
            if(j1 < j2){
                j1++;
                j2-=2;
            }
            else{
                j2++;
                j1-=2;
            }
            ti++;
        }
    }
    cout << ti << endl;
    return 0;
}
