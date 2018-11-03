#include <bits/stdc++.h>
using namespace std;


int main(){
    long long n;
    cin >> n;
    long long b[n];
    for(long long i = 0; i < n;i++) cin>>b[i];
    
    /*for(long long i = 0; i < 200000; i++){
        b[i] = 1000000000;
    }*/
    //cout << b[0];
    
    sort(b,b+n);
    long long min, difference;
    //long long difference;
    /*int up = 1, down = 1;
    difference = b[n-1] - b[0];
    
    if(!difference){
        cout << "0 "<< n<<endl;
        return 0;
    }else{
        
        int i= n-2;
        while(b[i] == b[n-1]){
            up++;
            i--;
        }
        i = 1;
        while(b[i] == b[0]){
            down++;
            i++;
        }
        cout << difference << " "<<up*down<<endl;
    }*/
    
    
    min = b[n-1] - b[0];
    
    long long mn,mx;
    mn = mx = 0;

    for(long long i = 0; i < 2; i++){
        int j;
        if(i == 0){
           j = 0;}
        else{
           j = n-1;}

        for(long long k = 0; k == 0; ){
            if(i == 0){
              if(b[j] == b[j+1]) mn++;
              else{
                mn++;
                k=-1;
              }
              j++;
            } 
            else{
              if(b[j] == b[j-1]) mx++;
              else{
                mx++;
                k=-1;
              }
              j--;
            } 
            //cout << j;
        }
        //cout << i;
        //difference = mn*mx;
    }
    //cout << mn << mx;
    if(mn == n){  
        difference = n*(n-1)/2;
        //cout << "hi";
        //mn--;
        /*for(long long i = mn-1; i>0;i--){
            mn *= i;
            cout << mn;
        }*/
        //difference = mn;
    }
    else difference = mn*mx;
    //difference = mn*mx;
    cout << min << " " << difference;
    
    return 0;
}