#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int billet[3]={0}; //type of billet 0=25 1 = 50 2=100
    bool check = true;
    for(int i = 0; i < n; i++){
        int p; cin >> p;
        if(p==25){billet[0]++;}
        else{
            billet[0]--;
            if(p==50){
                if(billet[0]<0){check=false;break;}
                else{billet[1]++;}
            }
            else{
                if(billet[0]<0 || (billet[0]<2 && billet[1]==0)){
                    check=false;break;
                }
                else{
                    if(billet[1]>0){billet[1]--;}
                    else{billet[0]-=2;}
                    billet[2]++; //this operation is useless
                }
            }
        }
    }
    if(check){cout << "YES";}
    else{cout << "NO";}
    return 0;
}