#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    //int last = 1; //last selled
    bool all = true; //check tickets selled
    int budget=0; //how money the cine has
    for(int i = 0; i < n; i++){
        int p;
        cin >> p; //person
        if(p > 25){
            int substract = budget - p;
            if(substract<0){all=false;break;}
            else{
                budget = substract + p;
            }
        }
        else{budget+=p;}
    }
    if(all){cout << "YES";}
    else{cout << "NO";}
    
    return 0;
}