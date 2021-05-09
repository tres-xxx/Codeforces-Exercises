#include <iostream>
using namespace std;

int main(){
    int sn, two = 0, one = 0;
    cin >> sn;
    // n [sn++];
    for(int i = 0; i < sn; i++){
        //cin >> n[i];
        int temp;
        cin >> temp;
        if(temp == 200) two++;
        else one++;
    }
    if(two%2==0){
        if(one%2==0) cout << "YES";
        else cout << "NO";
    }
    else{
        if(one%2==0 && one > 0) cout << "YES";
        else cout << "NO";
    }
    
    return 0;
}