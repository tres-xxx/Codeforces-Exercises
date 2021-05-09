#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n;
    //cin >> n;
    scanf("%d\n", &n);
    std::vector<std::string> board(n); //checkboard
    for(int i=0; i < n; i++){ //get the lines of the board
        getline(std::cin, board[i]);
    }
    
    bool even(1); //the numbers are even
    
    for(int i=0; i<n; i++){
        if(!even){break;} //there are no even numbers
        for(int j=0; j<n; j++){
            int p_a=0;
            //up
            if(i>0&&board[i-1][j]=='o'){p_a++;}
            //down
            if(i<n-1&&board[i+1][j]=='o'){p_a++;}
            //left
            if(j>0&&board[i][j-1]=='o'){p_a++;}
            //right
            if(j<n-1&&board[i][j+1]=='o'){p_a++;}
            
            if(p_a%2!=0){even=false;break;}//it is not even
        }
    }
    
    if(even == false){puts("NO");}
    else{puts("YES");}
}