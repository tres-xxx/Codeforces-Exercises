//this code has been made by DionysiosB and posted on Github
#include <iostream>
using namespace std;

int main(){
    long first = 0,second = 0, third = 0;
    cin >> first >> second >> third;
    bool possible = false;
    for(long i = 0; i <= first; i++){
        if(i <= second && i >= (first-third) && (second-i) == (third-(first-i))){
            possible = true;
            cout << i << " " << second-i << " " << first-i << endl;
            break;
        }
    }
    if(!possible)
        cout << "Impossible" << endl;
    return 0;
}
