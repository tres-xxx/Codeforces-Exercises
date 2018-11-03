//with the help of the code posted by DionysiosB - Github
#include <algorithm>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    long n;
    //scanf("%ld\n",&n);
    cin >> n;
    std::vector<long> v_i(n,0);
    for(int i = 0; i < n; i++){
        //scanf("%ld\n",&v_i[i]);
        cin >> v_i[i];
    }
    std::vector<long long> v_ii(n+1,0); //sum of v_i without sort
    long long total(0);
    for(int i = 0; i < n; i++){
        total += v_i[i];
        v_ii[i+1] = total; //set the value of the sum
    }
    
    sort(v_i.begin(),v_i.end());
    
    std:: vector<long long> v_ii2(n+1,0); //sum of v_i with sort
    total = 0;
    for(int i = 0; i < n; i++){
        total += v_i[i];
        v_ii2[i+1] = total;
    }
    
    long m;
    //scanf("%ld\n",&m);
    cin >> m;
    
    std:: vector<long long> result_t(m);
    for(int i = 0; i < m; i++){
        long type, l, r;
        //long long result;
        //scanf("%ld %ld %ld", &type, &l, &r);
        cin >> type >> l >> r;
        l--; //the way in which the sum is going to be correct
        if(type==1){
            result_t[i] = v_ii[r]-v_ii[l];
            //printf("%lld\n", result);
        }
        else{
            result_t[i] = v_ii2[r]-v_ii2[l];
            //printf("%lld\n", result);
        }
    }
    for(int i = 0; i < m; i++){
        //printf("%lld\n",result_t[i]);
        cout << result_t[i] << endl;
    }
    return 0;
};