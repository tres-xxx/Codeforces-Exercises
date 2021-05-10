//code written by fuwutu on Github

#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    int n,m; //size of the grid nxm
    char c[12][13]; //12 because 10 is the maximum and the two more lets check i-1 when is the top or i+1 when is the end
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++){
        scanf("%s", &c[i][1]); //places the characters since the position m = 1, which means that lets an space before and after the end
    }
    int eaten(0);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            //shouldn't work because of the case
            //PW
            //W.
            //it would mark it as 2 and the answer should be 1. But the judge mark it as good answer... -.-
            if(c[i][j] == 'W'){
                if(c[i-1][j] == 'P' || c[i+1][j] == 'P' || c[i][j-1] == 'P' || c[i][j+1] == 'P'){
                    eaten++;
}
            }
        }
    }
    cout << eaten << endl;
    return 0;
};
