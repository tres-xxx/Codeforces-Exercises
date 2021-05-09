#include <iostream>
using namespace std;

int main(){
    int n; //number of laptops
    cin >> n;
    /*int q_p[100001]={0};
    int pos_big; //position of the biggest quality
    for(int i = 1; i < n; i++){
        
    }*/
    int q_p[4]={0};// q_p[0] = price && q_p[1] = position_p
                   // q_p[2] = quality && q_p[3] = position_q
    for(long i = 0; i < n; i++){
        int t,t_2; cin >> t >> t_2;
        if(q_p[0]<t){q_p[0] = t;q_p[1] = i;}
        if(q_p[2]<t_2){q_p[2] = t_2;q_p[3] = i;}
    }
    if(q_p[1] == q_p[3]){ cout << "Poor Alex";}
    else{ cout << "Happy Alex";}
    
    return 0;
}