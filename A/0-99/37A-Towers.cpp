#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n,n_t=0,m_l=0;
    cin >> n;
    int *li = new int [n];
    for(int i = 0; i < n; i++){
        cin >> li[i];
    }
    sort(li,li+n);
    int prev = li[0],t=0;
    n_t++;
    for(int i = 0; i < n; i++){
        if(prev == li[i]){
            t++;
        }
        else{
            n_t++;
            m_l = max(m_l,t);
            t = 1;
            prev = li[i];
        }
    }
    m_l = max(m_l,t);
    cout << m_l << " " << n_t << endl;
    return 0;
}
