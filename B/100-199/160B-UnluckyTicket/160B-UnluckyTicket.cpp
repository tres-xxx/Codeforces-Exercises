#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int half_1[101],half_2[101];
    char number[203];
    cin >> number;
    for(int i = 0; i < n; i++){
        //char t;
        //cin >> t;
        //cin >> half_1[i];
        half_1[i] = number[i]-48;
    }
    for(int i = n,j=0; i < (n*2); i++,j++){
        //cin >> half_2[i];
        half_2[j] = number[i]-48;
    }
    sort(half_1,half_1+n);
    sort(half_2,half_2+n);
    
    short flag_1=0, flag_2=0; //flag_1 = strictly less / flag_2 = strictly more
    int pos = 0;
    for(; pos<n && flag_1==0 && flag_2==0; pos++){
        if(half_1[0] < half_2[pos]){
            flag_1 = 1;
        }
        else{
            if(half_1[0] > half_2[pos]){
                flag_2 = 1;
            }
        }
    }
    pos--;
    if((flag_1==0&&flag_2==0)||((flag_1==1||flag_2==1)&&pos>0)) cout << "NO";
    else{
        for(int i = 1; i < n; i++){
            if(flag_1==1){
                if(half_1[i]>=half_2[i]){flag_1=0;i=n;}
            }
            else{
                if(half_1[i]<=half_2[i]){flag_2=0;i=n;}
            }
        }
        if(flag_1==1||flag_2==1) cout << "YES";
        else cout << "NO";
    }
    
    /*short b_s = 0;
    if(half_1[0]==half_2[0])b_s=-1; //uncertain
    else{
        if(half_1[0]>half_2[0])b_s=1; //strictly more
        else b_s=0; //strictly less
    }
    for(int i = 1; i < n && b_s!=2; i++){
        if(half_1[i]>half_2[i]){
            if(b_s==-1)b_s=1;
            else{
                if(b_s==0)b_s=2; //No lucky
            }
        }
        else{
            if(half_1[i]<half_2[i]){
                if(b_s==-1) b_s=0;
                else{
                    if(b_s==1)b_s=2;
                }
            }
        }
    }
    
    if(b_s==2 || b_s==-1) cout << "NO";
    else cout << "YES";*/
    
    return 0;
}