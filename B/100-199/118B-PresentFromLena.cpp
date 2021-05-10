#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i = 0,half = 0,halfM=0; i >= 0;){
        //cout << "|";
        for(int j = n-i; j <= n-i;){
            if(j > 0 && half == 0){
               cout << "  ";
               j--;
            } 
            else{
                if(j == 0){ 
                    //cout << i;
                    for(int k = 0; k >= 0;){
                        if(k<i && half == 0){
                            cout << k << " ";
                            k++;
                        }
                        else{
                            if(k == i){
                                cout << i;
                                k--;
                                half = 1;
                            }
                            else{
                                cout << " " << k;
                                k--;
                            }
                        }
                    }
                    //half = 1;
                    j++;
                }
                else{
                    //cout << "  ";
                    j++;
                }
            }
        }
        half = 0;
        //cout << "|";
        cout << "\n";
        if(i < n && halfM == 0) i++;
        else{
            if(i == n){ 
                halfM = 1;
                i--;
            }
            else i--;
        }
    }
    
    return 0;
}