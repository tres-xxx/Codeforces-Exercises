//solution posted by fuwutu - Github
#include <iostream>
using namespace std;

int main(){
    int t,a;
    cin >> t; //number of polygons
    while(t--){
        cin >> a; //angle for the regular polygon
        if(360 % (180 - a) == 0){ //number of vertex, if it exists module should be equals to 0
            cout << "YES" << endl;        
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
};
