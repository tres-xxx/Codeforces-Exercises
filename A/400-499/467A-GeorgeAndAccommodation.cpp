#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count_room = 0;
    int pi,qi;
    for(int i = 0; i < n; i++){
        cin >> pi >> qi; //pi == persons || qi == quantity
        if((qi-pi) >= 2){
            count_room++;
        }
    }
    cout << count_room << endl;
    return 0;
}
