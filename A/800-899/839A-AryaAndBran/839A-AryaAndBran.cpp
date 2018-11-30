/*#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n,k,candies = 0,day = -1, candiesBag = 0;
    cin >> n >> k;
    int ai[n],cL=0;
    for(int i = 0; i < n; i++) cin >> ai[i];
    sort(ai, ai + n);
    for(int i = n-1; i >= 0; i--){
        if(ai[i] >= 8){ 
            candies += 8;
            candiesBag += (ai[i]-8);
        }
        else{
            if(candiesBag > 0){
                int eight = 8 - ai[i];
                if(candiesBag > eight){
                    candies += 8;
                    candiesBag -= eight;
                }
                else{
                    candies += (ai[i]+candiesBag);
                    candiesBag = 0;
                }
            }
            else candies += ai[i];
        }
        if(candies >= k){
            day = n-i;
            break;
        }
    }
    cout << day << endl;
    return 0;
}*/

//solution of the problem based on the code posted by user kantuni on github.com
#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int a,b,mnd,candie;
    a = b = mnd = 0;
    for(int i = 0; i < n; i++){
        cin >> candie;
        if(candie+a >= 8){
            b+=8;
            a+=candie-8;
            mnd++;
        }
        else{
            b+=candie+a;
            a = 0;
            mnd++;
        }
        if(b >= k){
            cout << mnd << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}
