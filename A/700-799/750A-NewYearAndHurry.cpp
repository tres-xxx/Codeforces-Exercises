#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int time_contestTravel = (60*4)-k;
    int problems = 0;
    int time_problems = 0;
    while(time_problems<=time_contestTravel&&problems<=n){
        problems++;
        time_problems+=(problems*5);
    }
    if(problems!=0){problems--;}
    cout << problems << endl;
    return 0;
};
