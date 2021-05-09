#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n,max=0;
    int ribbon[4]={0};
    cin >> n;
    for(int i = 0; i < 3; i++){cin >> ribbon[i];}
    sort(ribbon,ribbon + 3);
    for(int i = 0, t_i =ribbon[0]*i; t_i <= n; i++){
        //int sum = 0;
        t_i = ribbon[0] * i;
        if(t_i == n){
            if(i > max){max = i;}
        }
        for(int j = 0, t_j=(ribbon[1]*j)+t_i; t_j<=n; j++ ){
            t_j=(ribbon[1]*j)+t_i;
            if(t_j == n){
                if((i+j)>max){max=i+j;}
            }
            for(int k = 0, t_k=(ribbon[2]*k)+t_j;t_k<=n; k++){
                t_k=(ribbon[2]*k)+t_j;
                if(t_k == n){
                    if((i+j+k)>max){max=i+j+k;}
                }
            }
        }
    }
    cout << max;
    return 0;
}