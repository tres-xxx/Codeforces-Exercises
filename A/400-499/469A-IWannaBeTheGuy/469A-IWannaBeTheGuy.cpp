#include <iostream>
using namespace std;

int main(){
    int n,out=1; 
    cin >> n;
    int p[101]={0};
    int q[101]={0};
    for(int i=0; i<2; i++){
        int temp;
        cin>>temp;
        for(int j=0; j<temp;j++){
            int t;
            cin>>t;
            if(i==0)p[t-1]++;
            else q[t-1]++;
        }
    }
    
    for(int i=0; i<n && out==1;i++)
        if(p[i]==0 && q[i]==0) out=0;
    
    if(out==1)cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    return 0;
}