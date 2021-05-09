#include <iostream>
using namespace std;

int main(){
    /**
     * Prime numer
    **/
    /*int n;
    int boolean = 0;
    cin>>n;
    for(int i = 2; i < n; i++)
        if(n%i == 0) boolean = 1;
    if(boolean) cout << "No boolean";
    else cout << "Yes boolean";
    /**
     * End
    **/
    int n;
    cin >> n;
    int islucky = 0;
    for(int i = n; i>0 && islucky == 0;){
        int temp = i%10;
        if(temp != 4 && temp != 7){
            i = 0;
            break;
        }
        else{
            if(i < 10) islucky = 1;
            i = i / 10;
        }
    }
    if(!islucky)
        if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n%477==0 || n %747== 0) islucky = 1;
    
    if(islucky) cout << "YES";
    else cout << "NO";
    
    return 0;
}