//base on the code posted by jackiehluo Github
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n,l,r;
    cin >> n >> l;
    int *p = new int[n];

    for(int i = 0; i < n; i++){
        cin >> p[i];    
    }
    sort(p,p+n);
    if(p[0] != 0){
        r = p[0] * 2;
    }
    //r = max(p[0],1-p[n-1])*2;//why? it's not necesary to have a number negative so big
    for(int i = 0 ; i < (n-1); i++){
        r = max(r,p[i+1]-p[i]);
    }
    r = max(r,(l - p[n-1])*2);
    cout.precision(20);
    cout << fixed << r/2.0 << endl;
    return 0;
}
