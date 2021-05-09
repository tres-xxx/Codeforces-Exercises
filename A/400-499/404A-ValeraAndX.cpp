#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char x; //first letter to know if there is an x
    char nx; //no x
    bool is_x = true; //I hope that is an x :P
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i==0 && j==0){
                cin >> x >> nx;
                if(x==nx){is_x = false;}
                j=1;
            }
            else{
                char t; //any letter;
                cin >> t;
                if(is_x){
                    if(j==i || j == (n-i)-1){
                        if(x != t){is_x=false;}
                    }
                    else{
                        if(nx != t){
                            is_x=false;
                        }
                    }
                }
            }
        }
    }
    if(is_x){cout << "YES";}
    else{cout << "NO";}
    return 0;
};