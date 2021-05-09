#include <iostream>
using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    int cake[11][11];
    int cell_eat = 0;
    int p_r=0; //the total of rows not eated
    for(int i = 0; i < r; i++){
        char temp[11];
        cin >> temp;
        int s = 0; //strawberry?
        for(int j = 0; j<c; j++){
            if(temp[j] == '.') cake[p_r][j] = 0;
            if(temp[j]=='S'){  //There is a strawberry
                s=1;
                cake[p_r][j] = 1;
            }
        }
        if(s==1){ p_r++; }
        else cell_eat+=c;
    }
    
    
    for(int j=0; j<c; j++){
        int s=0;
        for(int i=0; i<p_r; i++){
            if(cake[i][j]==1){
                s=1;
                i=p_r;
            }
        }
        if(s==0){ cell_eat+=p_r;}
    }
    cout << cell_eat;
    return 0;
}