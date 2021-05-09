#include <string.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char teamO[11];
    char teamS[11];
    int teamON = 0, teamSN = 0;
    for(int i = 0; i < n; i++){ 
        char temp[11];
        cin >> temp;
        if(teamON == 0){
            teamON++;
            //teamO = temp; //Can I do this?... I don't remember... LATER: No... I can't
            strcpy(teamO, temp);
        }
        else{
            if(strcmp(temp, teamO) == 0) teamON++;
            else{
                if(teamSN == 0) strcpy(teamS, temp);
                teamSN++;
            }
        }
    }
    
    if(teamON > teamSN) cout << teamO;
    else cout << teamS;
    
    return 0;
}