#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long *v_i = new long long[n+1];
    long long *v_ii = new long long[n+1];
    for(int i = 0; i < n; i++){cin >> v_i[i];v_ii[i]=v_i[i];}
    sort(v_ii, v_ii+n);
    long long m; //questions
    cin >> m;
    long long *t_sum = new long long[m+1];
    for(int i = 0; i < m; i++){
        long long l,r,type,sum=0;
        cin >> type >> l >> r;
        if(type == 2){
            for(l--;l<r;l++){
                sum=v_ii[l]+sum;
            }
        }
        else{
            for(l--;l<r;l++){
                sum=v_i[l]+sum;
            }
        }
        t_sum[i]=sum;
    }
    for(int i = 0; i < m; i++){
        cout << t_sum[i] << endl;
    }
    return 0;
}