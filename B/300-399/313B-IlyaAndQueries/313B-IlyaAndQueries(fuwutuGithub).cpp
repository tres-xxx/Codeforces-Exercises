//this solution has been written by fuwutu on Github
#include <cstring>
#include <iostream>
using namespace std;

int main(){
    char s[100001];
    int a[100001],m,l,r,t;
    
    cin >> s >> m;
    int len = strlen(s);
    int *answer = new int[m];
    
    a[1] = 0; //???
    for(int i = 1; i < len; i++){
        if(s[i] == s[i-1]){
            a[i+1] = a[i] + 1;
        }
        else{
            a[i+1] = a[i];
        }
    }
    t = 0;
    while(m--){
        cin >> l >> r;
        answer[t] = a[r] - a[l];
        t++;
        //cout << a[r] - a[l] << endl;
    }
    
    for(int i = 0; i < t; i++){
        cout << answer[i] << endl;
    }

    return 0;
};
