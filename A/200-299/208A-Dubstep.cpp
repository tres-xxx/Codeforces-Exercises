#include <iostream>
using namespace std;

#include <string.h>

int main(){
    char dubstep[201];
    //char mix []= {'W','U','B'};
    
    cin >> dubstep;
    
    int dubstepS = strlen(dubstep);
    
    for(int i = 0, word = 0; i < dubstepS;){
        /*if(strncmp(dubstep[i], mix, 3) == 0){
            cout << " ";
            for(i = i + 3; i < dubstepS;){
                if(strncmp(dubstep[i], mix, 3) == 0)
            }
        }*/
        /*if(strncmp(dubstep[i],"WUB",3) == 0){
            i += 3;
            word = 0;
        } 
        else{
            for(;i<dubstepS && word == 0;i++){
                if(dubstep[i] != 'W')
                    cout << dubstep[i];
                else word = 1;
            }
            cout << " ";
        }*/
        if(dubstep[i] != 'W'){
            cout << dubstep[i];
            i++;
            word = 1;
        }
        else{
            if(dubstep[i+1] == 'U' && dubstep[i+2] == 'B'){
                i += 3;
                if(word == 1){
                    cout << " ";
                    word = 0;
                } 
            }
            else{
                cout << "W";
                word = 1;
                i++;
            } 
        }
         
        
    }
    
    //cout << dubstep << mix;
    
    return 0;
}