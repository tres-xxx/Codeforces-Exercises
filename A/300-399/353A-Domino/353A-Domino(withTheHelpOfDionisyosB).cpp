//with the help of the code posted by DionysiosB - Github
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool under=false, over=false,underSum=false,overSum=false,rotate=false;
    for(int i = 0; i < n; i++){
        int halfU,halfO;
        cin >> halfO >> halfU;
        over = halfO % 2;
        under = halfU % 2;
        overSum = overSum ^ over; //0^0=0 0^1=1 if exists two odds 1^1=0
        underSum = underSum ^ under;
        if(overSum ^ underSum){rotate=true;}
    }
    
    if(!overSum && !underSum){cout<<"0";}
    else{
        if(overSum && underSum && rotate){cout << "1";}//odd and odd
        else{cout<<"-1";}
    }
    
    return 0;
}