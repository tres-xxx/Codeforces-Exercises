#include <iostream>
using namespace std;

int main(){
    long long n,m,team=0;
    cin >> n >> m;
    while(n > 0 && m > 0){
        if(m > n){
            m -= 2;
            n--;
            team++;
        }
        else{
            if(m < n){
                n -= 2;
                m--;
                team++;
            }
            else{
                if(m != 1){
                    m -= 2;
                    n--;
                    team++;
                }
                else{
                    cout << team << endl;
                    return 0;
                }
            }
        }
    }   
    cout << team << endl;
    return 0;
}
