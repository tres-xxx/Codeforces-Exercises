//code has been found on www.cnblogs.com/flipped/p/5189752.html
#include <cstdio>
#include <algorithm>
#include <queue>
#include <iostream>
using namespace std;

#define N 100005 //why this number?

int main(){
    int n,b;
    int ex[N], ey[N], d[N], s[N];
    queue <int> q;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> d[i] >> s[i];
        if(d[i] == 1){
            q.push(i);
        }
    }
    
    int i;
    while(!q.empty()){
        i = q.front();
        q.pop();
        if(d[i] == 1){
            ex[b] = i; //how is this possible if b has not been initialized?
            ey[b] = s[i];
            b++;

            s[s[i]]^=i;
            d[s[i]]--;
            if(d[s[i]] == 1){
                q.push(s[i]);
            }
        }
    }

    cout << b << endl;

    for(i = 0; i < b; i++){
        cout << ex[i] << " " << ey[i] << endl;
    }
    return 0;
};
