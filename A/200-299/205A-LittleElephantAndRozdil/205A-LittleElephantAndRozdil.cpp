#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int city = 0;
    int place = 0;
    short justone = 0;
    cin >> city;
    for(int i=1; i<n; i++){
        int timeC;
        cin >> timeC;
        if(timeC <= city){  
            if(city == timeC) justone = 1;
            else justone = 0;
            city = timeC;
            place = i;
        }
    }
    if(city != 0 && justone != 1) cout << place+1;
        else cout << "Still Rozdil";
    return 0;
}