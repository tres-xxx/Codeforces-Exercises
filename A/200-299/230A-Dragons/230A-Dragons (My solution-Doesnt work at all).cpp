#include <iostream>
using namespace std;

int main(){
    int s,n;
    cin >> s >> n;
    bool duel = true;
    int max = (10*10*10*10)+1,t=0;
    long long int dragon[max];
    for(int i = 0; i < n; i++){
        int strength, bonus;
        cin >> strength >> bonus;
        if(bonus == 0){
            if(dragon[strength] == 0){ 
                dragon[strength] = -1;
                t++;
            }
            //else t--;
        } 
        else{ 
            if(dragon[strength] == -1){
                dragon[strength] = bonus;  
                //t--;
            } 
            else{ 
                if(dragon[strength] == 0) t++;
                //else t--;
                dragon[strength] += bonus;
            }
            //cout << strength << bonus<<"|";
        }
        //cout << t << " ";
    }
    //t = n-t;
    //cout << t << "asdf";
    cout << t;
    for(int i = 0; i < max && duel == true && t > 0; i++){
        cout << i;
        if(dragon[i] != 0){
            cout << i << " " << dragon[i]<<"\n";
            if(s > i){
                if(dragon[i] != -1) s+=dragon[i];
            }
            else{
                i = max;
                duel = false;
                //cout << "no";
            }
            t--;
        }
    }
    
    if(duel == true) cout << "YES";
    else cout << "NO";
    return 0;
}