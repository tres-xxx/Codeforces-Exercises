//this code has been written by MikeMirzayanov on Codeforces's contest 496 solution 
#include <vector>
#include <iostream>
using namespace std;

long long greaterCount(int m,int n, vector<int> a){
    vector<int> s(2*n+1);
    int sum = n;
    long long result = 0;
    s[sum] = 1;
    long long add = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < m){
            sum--, add-=s[sum];
        }
        else{
            add += s[sum], sum++;
        }
        result += add;
        s[sum]++;
    }
    return result;
};

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << greaterCount(m,n,a) - greaterCount(m+1,n,a) << endl;
    return 0;
}
