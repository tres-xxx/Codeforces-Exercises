#include <iostream>
using namespace std;

int main(){
    long long d1,d2,d3,dist1,dist2,dist3,dist4;
    cin >> d1 >> d2 >> d3;
    dist1 = (d1*2)+(d2*2);
    dist2 = d1+d2+d3;
    dist3 = (d1*2)+(d3*2);
    dist4 = (d2*2)+(d3*2);
    if(dist1 <= dist2 && dist1 <= dist3 && dist1 <= dist4){
        cout << dist1 << endl;
    }
    else{
        if(dist2 <= dist3 && dist2 <= dist4){
            cout << dist2 << endl;        
        }
        else{
            if(dist3 <= dist4){
                cout << dist3 << endl;
            }
            else{
                cout << dist4 << endl;
            }
        }
    }
    return 0;
}
