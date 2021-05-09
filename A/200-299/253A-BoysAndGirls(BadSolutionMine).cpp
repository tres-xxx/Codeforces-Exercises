#include <iostream>
using namespace std;

int main(){
    int n,m; //n=boys | m=girls
    cin >> n >> m;
    if(m>n){
        for(int i = 0,j=0; i<n || j <m; ){
            if(j<m){ cout << "G";j++;}
            if(i<n){ cout << "B";i++;}
        }
    }
    else{
        for(int i = 0,j=0; i<n || j <m; ){
            if(i<n){ cout << "B";i++;}
            if(j<m){ cout << "G";j++;}
        }    
    }
    return 0;
}