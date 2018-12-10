#include <string>
#include <iostream>
using namespace std;

int main(){
    int n,d,maxD=0,tD=0;
    cin >> n >> d;
    string opPresent;
    bool abscent = false;
    for(int i = 0; i < d; i++){
        cin >> opPresent;
        for(int j = 0; j < opPresent.size() && !abscent; j++){
            if(opPresent[j] == '0') abscent = true;
        }
        if(abscent){
            tD++;
            if(tD > maxD) maxD = tD;
        }
        else tD = 0;
        abscent = false;
    }
    cout << maxD << endl;
    return 0;
}
