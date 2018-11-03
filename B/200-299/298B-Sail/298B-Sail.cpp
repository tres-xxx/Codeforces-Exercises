#include <iostream>
using namespace std;

int main(){
    int t,sx,sy,ex,ey,tt=-1;
    cin >> t >> sx >> sy >> ex >> ey;
    
    for(int i = 0; i < t; i++){
        char wind;
        cin >> wind;
        switch(wind){
            case 'N': if(sy < ey){ sy++;} break;
            case 'S': if(sy > ey) sy--; break;
            case 'W': if(sx > ex) sx--; break;
            case 'E': if(sx < ex) sx++; break;
            default: cout << "anything";break;
        }
        
        if((sx == ex) && (sy == ey)){
            tt = i+1;
            i = t;
        } 
    }
    
    cout << tt;
    
    return 0;
}