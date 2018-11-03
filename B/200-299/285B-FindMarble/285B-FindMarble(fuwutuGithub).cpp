//based on the code posted by fuwutu on Github
#include <iostream>
using namespace std;

int main(){
    long n,s,t;
    cin >> n >> s >> t;
    long *p = new long[n+1];
    for(int i = 1; i <= n; i++){
        cin >> p[i];
    }
    int step = 0;
    while(s != t && p[s] != 0){ //you can't go to position 0 so... it's the end!
        int temp = p[s];
        p[s] = 0;
        s = temp;
        step++;
    }
    if(s == t){
        cout << step << endl;
    }
    else{
        cout << "-1" << endl;
    }
    return 0;
};
