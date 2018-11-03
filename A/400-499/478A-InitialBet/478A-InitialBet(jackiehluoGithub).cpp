//code writed by jackehluo on Github
#include <iostream>
using namespace std;

int main(){
    int p1,p2,p3,p4,p5;
    cin >> p1 >> p2 >> p3 >> p4 >> p5;
    int coin = p1 + p2 + p3 + p4 + p5;
    if(coin > 0 && coin%5 == 0){
        cout << (coin/5) << endl;
    }
    else{
        cout << "-1" << endl;
    }
    return 0;
};
