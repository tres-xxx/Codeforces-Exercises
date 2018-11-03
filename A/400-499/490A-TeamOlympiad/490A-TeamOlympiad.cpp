#include <iostream>
using namespace std;

int main(){
    int n=0;
    cin >> n;
    //long ti[n+1];
    long ti_1[5001]={-1},ti_2[5001]={-1},ti_3[5001]={-1};
    long max=0; //max amount of teams
    for(int i = 1,t_1=0,t_2=0,t_3=0; i <= n; i++){
        int t;
        cin >> t;
        //ti[i]=t //student skill
        if(t==1){
            ti_1[t_1]=i; //position of the student on index
            t_1++;
            if((t_1<=t_2)&&(t_1<=t_3)) max=t_1; //stablish the less number of combinations
        }
        else{
            if(t==2){
                ti_2[t_2]=i;
                t_2++;
                if((t_2<=t_1)&&(t_2<=t_3)) max=t_2;
            }
            else{
                ti_3[t_3]=i;
                t_3++;
                if((t_3<=t_2)&&(t_3<=t_1)) max=t_3;
            }
        }
    }
    cout << max; //print the maximum amount of combinations
    if(max!=0)
        for(int i = 0; i < max; i++)
            cout << endl << ti_1[i] << " " << ti_2[i] << " " << ti_3[i];
            
    return 0;
}