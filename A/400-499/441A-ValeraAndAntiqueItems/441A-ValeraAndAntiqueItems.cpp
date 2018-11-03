#include <iostream>
using namespace std;

int main(){
    int n,a_s=0,p_s[51];
    long v;
    cin >> n >> v;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        short bigger=0;
        for(int j = 0; j < k; j++){
            long temp;
            cin >> temp;
            if(temp<v && bigger==0){
                bigger=1;
            }
        }
        if(bigger==1){
            p_s[a_s]=i+1;
            a_s++;
        }
    }
    cout << a_s << endl;
    if(a_s!=0){
        cout << p_s[0];
        for(int i = 1; i<a_s; i++){
            cout << " " << p_s[i];
        }
    }
    return 0;
};