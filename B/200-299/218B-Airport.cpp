//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <algorithm>
#include <stdlib.h>

int main(){
    int n,m;
    cin >> n >> m;
    int a[1001];
    for(int i = 0; i < m; i++) cin >> a[i];
    
    sort(a,a+m);
    
    int min,max;
    min = max = 0;
    
    int temp = a[0];
    
    for(int i = n, j = 0; i > 0;){
        min += temp;
        if(temp == 0){ 
            j++;
            temp= a[j];
        }
        else{
           temp--;
           i--; 
        } 
    }
    
    for(int i = n,last = m-1; i>0;){
        if(a[last] > a[last-1]){
            max+=a[last];
            a[last]--;
            i--;
            //cout << max;
        }
        else{
            for(int k=last;k>=0&&i>0;){
                if(k != 0){
                    if(a[k]==a[k-1]){
                        max+=a[k];
                        a[k]--;
                        i--;
                    }
                    else{
                        max+=a[k];
                        a[k]--;
                        i--;
                        k = -1;
                    }
                }
                else{
                    max+=a[k];
                    a[k]--;
                    i--;
                }
                k--;
                //cout << max;
            }
        }
        
        /*max += a[last];
        a[last]--;
        if(a[last-1]>a[last])last--;*/
    }
    
    cout << max << " " << min;
    /*for(int i = 0, j; ;i++){
        int temp;
        if(min != n){
            for(int ) 
        }
    }*/
    return 0;
}