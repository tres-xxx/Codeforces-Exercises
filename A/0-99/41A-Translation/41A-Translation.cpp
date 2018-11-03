#include <string.h>
#include <iostream>
using namespace std;

int main(){
    char t[101];
    char s[101];
    
    cin >> t; // cin recognize the newline as a new input
    cin >> s;
    
    int sizet = strlen(t);
    int sizes = strlen(s);
   
    if(sizet == sizes){
        sizes--;
        for(int i = 0; i < sizet; i++,sizes--){ // I don't know why the sizes is reduced to -1 when i is equals to sizet
            if(t[sizes] != s[i]){ 
                i = sizet;
                sizes = 1;
            }
        }
    }
    sizes++;
    if(sizes == 0) cout << "YES";
    else cout << "NO";
    return 0;
}