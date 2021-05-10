//code writed by vishnujayvel and posted on codinghangover.wordpress.com
#include <iostream>
using namespace std;

#define forn(i,n) for(int i = 0; i < n; i++)
#define MAX 10000005

typedef long long int ll;
int arr[MAX];
int count1[MAX];

int main(){
    int n;
    cin >> n;
    ll s = 0;
    forn(i,n){
        cin >> arr[i];
        s += arr[i];
    }
    if(s%3 != 0 || n <= 2){
        cout << "0" << endl;
    }
    else{
        ll sum = s/3;
        ll temp = 0;
        for(int i = n-1; i >= 0; i--){
            temp += arr[i];
            if(temp == sum){
                count1[i] += 1;
            }
        }
        for(int i = n-2; i >= 0; i--){//??
            count1[i] += count1[i+1];
        }
        temp = 0;
        ll ans = 0;
        for(int i = 0; i+2 < n; i++){
            temp += arr[i];
            if(temp == sum){
                ans += count1[i+2];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
