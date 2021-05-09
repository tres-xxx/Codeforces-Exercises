#include <iostream>
using namespace std;

int main(){
    int n; //number of events
    int freepolice = 0;
    int untreated = 0;
    int crimePolice;
    cin >> n;
    while(n--){
        cin >> crimePolice;
        if(crimePolice == -1){
            if(freepolice == 0){
                untreated++;
            }
            else{
                freepolice--;
            }
        }
        else{
            freepolice += crimePolice;
        }
    }
    cout << untreated << endl;
    return 0;
};
