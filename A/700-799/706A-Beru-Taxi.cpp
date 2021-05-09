//code based on the code posted by user arifkhan1990 on github.com
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    int a,b,n,x,y,v;
    cin >> a >> b;
    cin >> n;
    double distance = 1e99,d;
    for(int i = 0; i < n; i++){
        cin >> x >> y >> v;
        d = hypot((x-a)+0., (y-b)+0.)/v;
        distance = min(distance,d);
    }
    cout << fixed;
    cout << setprecision(20) << distance << endl;
    return 0;
}
