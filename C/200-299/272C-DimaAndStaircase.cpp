#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long long int n,m;
    cin >> n;
    long long int *ai = new long long int [n];
    for(long long int i = 0; i < n; i++){
        cin >> ai[i];
    }
    cin >> m;
    long long int *landing = new long long int[m];
    long long int wid=0,hei=0,indexs=0,maxs=0;
    for(long long int i = 0; i < m; i++){
        long long int wi,hi;
        cin >> wi >> hi;
        if(wi <= n && wi > indexs){
            for(; indexs < wi; indexs++){
                maxs = max(maxs,ai[indexs]);
            }
            if(maxs > hei){
                hei = maxs;
            }
        }
        landing[i] = hei;
        hei += hi;
    }
    for(long long int i = 0; i < m; i++){
        cout << landing[i] << endl;
    }
    return 0;
}
