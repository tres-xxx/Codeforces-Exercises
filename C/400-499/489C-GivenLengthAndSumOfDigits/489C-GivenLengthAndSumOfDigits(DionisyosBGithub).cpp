//code writed by DionysiosB on Github
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

bool possible(int m, int s){
    //s should be equals or greater than 0 && the number of sums 9*m should be greater than s
    return (s >= 0) && (s <= 9 * m); 
}

int main(){
    int m,s;
    cin >> m >> s;
    if((s <= 0 && m > 1) || (s > (9*m))){
        cout << "-1 -1" << endl;
    }
    else{
        string min(""),max("");
        int sum = s;
        for(int i = 0; i < m; i++){ //position
            for(int j = 0; j <= 9; j++){//digit
                if((i > 0 || j > 0 || (m == 1 && j == 0)) && possible(m-i-1, sum-j)){
                    min += ('0' + j);
                    sum -= j;
                    break;
                }
            }
        }
        sum = s;
        for(int i = 0; i < m; i++){//position
            for(int j = 9; j >= 0; j--){ //digit
                if(possible(m-i-1,sum-j)){
                    max += ('0' + j);
                    sum -= j;
                    break;
                }
            }
        }
        cout << min << " " << max << endl;
    }
    return 0;
};
