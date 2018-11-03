#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n;
    //int nF,mF;
    long int nF[n];
    //cin>>nF;
    //for(int i = 1,temp; i<n;i++) cin >> temp;
    for(int i = 0; i < n; i++)cin >> nF[i];
    cin>>m;
    //cin>>mF;
    long int mF[m];
    //for(int i = 1, temp; i<m;i++) cin >> temp;
    for(int i = 0; i < m; i++) cin >> mF[i];
    //mF = mF + m - 1;
    //nF = nF + n - 1;
    int max = 0;
    /**for(int i = 0,ratio=0,temp,divi; i<n; i++,nF--){
        if(nF <= mF){
            divi = nF&mF;
            if(divi == 0) temp = mF/nF;
            else temp = (mF-divi)/nF;
        
            if(temp == ratio) max++;
            else{
                if(temp > ratio){
                    max = 1;
                    ratio = temp;
                }
            }
        }
    }**/
    n--;
    m--;
    
    for(int ratio = 0;n>=0;n--){
        for(int i = m,temp; i>=0;i--){
            //int a = nF[n];
            //int b = mF[i];
            if(mF[i] % nF[n] == 0){
            //if(b%a == 0){
                temp = mF[i] / nF[n];
                //temp = b/a;
                if(temp > ratio){
                    ratio = temp;
                    max = 1;
                }
                else{
                    if(temp == ratio) max++;
                }
                i = -1;
            }
        }
    }

    cout << max;
    
    return 0;
}