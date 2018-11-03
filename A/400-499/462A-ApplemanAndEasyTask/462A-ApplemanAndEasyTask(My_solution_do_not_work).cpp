#include <iostream>
using namespace std;

int find(char x){
    if(x=='o') return 1;
    else return 0;
}

int main(){
    int n;
    cin >> n;
    char board[101][101];
    for(int i = 0; i < n; i++){ cin >> board[i];}
    short even = 1;
    int check[101][101]={0};
    for(int i = 0; i < n && even==1; i++){
        short t_e=0;
        for(int j = 0; j < n && even==1; j++){
            if(board[i][j]=='o'){
                int top_i=i-1, down_i=i+1;
                int left_j=j-1, right_j=j+1;
                check[i][j]=1;
                //top
                if(top_i>=0){
                    if(left_j>=0){ t_e+=find(board[top_i][left_j]);check[top_i][left_j]=1;}
                    t_e+=find(board[top_i][j]);check[top_i][j]=1;
                    if(right_j<n){t_e+=find(board[top_i][right_j]);check[top_i][right_j]=1;}
                }
                //center
                if(left_j>=0){t_e+=find(board[i][left_j]);check[i][left_j]=1;}
                if(right_j<n){t_e+=find(board[i][right_j]);check[i][right_j]=1;}
                //down
                if(down_i<n){
                    if(left_j>=0){ t_e+=find(board[down_i][left_j]);check[down_i][left_j]=1;}
                    t_e+=find(board[down_i][j]);check[down_i][j]=1;
                    if(right_j<n){t_e+=find(board[down_i][right_j]);check[down_i][right_j]=1;}
                }
                
                if(t_e%2!=0)even=0;
            }
        }
    }
    if(even==1){ 
        short t_c=1;
        for(int i = 0; i < n&&t_c==1; i++){
            for(int j = 0; j<n&&t_c==1; j++){
                if(check[i][j]==0) t_c=0;
            }
        }
        if(t_c==1){ cout << "YES";}
        else{cout << "NO";}
        
    }
    else cout << "NO";
    return 0;
}