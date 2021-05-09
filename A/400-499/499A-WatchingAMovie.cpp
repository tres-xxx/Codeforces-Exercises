#include <iostream>
using namespace std;

int main(){
    int n; //number of best moments
    long x; //value x second button 
    long long minute = 0;
    long long minuteswatched = 0; //all the minutes seen of the movie
    cin >> n >> x;
    while(n--){
        long li,ri;
        cin >> li >> ri; //li first minute || ri last minute
        while((minute+x)<li){minute+=x;}
        minuteswatched+=(ri-minute);
        minute = ri; //final time
    }
    cout << minuteswatched << endl;
    return 0;
}