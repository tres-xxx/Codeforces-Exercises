#include <iostream>
using namespace std;

int main(){
    int ab[28]={0},dlet=0;
    char letter;
    do{
        cin>>letter;
        if(letter!='{'&&letter!=',')
            ab[((int)letter)-97]++;
    }
    while(letter!='}');
    
    for(int i = 0; i < 28; i++)
        if(ab[i]!=0)dlet++;
    cout << dlet;
    return 0;
}