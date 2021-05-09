#include <iostream>
using namespace std;

int main(){
    char square[4][4];
    bool t_t = false; //t_t = square two two
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> square[i][j];
            if(!t_t){
                if(i>0){
                    int t_s = 0; //temporaly sum
                    bool left = false;
                    t_s++;
                    if(j==0){
                        left = true;
                        if(square[i-1][j] == '#'){t_s++;}
                        if(square[i-1][j+1] == '#'){t_s++;}
                        if(square[i][j] == '#'){t_s++;}
                    }
                    else{
                        if(square[i-1][j-1] == '#'){t_s++;}
                        if(square[i-1][j] == '#'){t_s++;}
                        if(square[i][j] == '#'){t_s++;}
                        if(square[i][j-1] == '#'){t_s++;}
                    }
                    //cout << i << " " << j << " " << t_s << endl;
                    if(left){
                        if(t_s == 1 || t_s == 4){t_t=true;}
                    }
                    else{
                        if(t_s < 3 || t_s > 3){t_t=true;}
                    }
                }
                
            }
        }
    }
    if(t_t){cout << "YES";}
    else{cout << "NO";}
    return 0;
}