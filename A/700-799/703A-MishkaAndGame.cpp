#include <iostream>
using namespace std;

int main(){
    int n,mi,ci,points=0;
    cin >> n;
    while(n--){
        cin >> mi >> ci;
        if(mi>ci){
            points++;
        }
        else{
            if(mi<ci){
                points--;
            }
        }
    }
    if(points==0){
        cout << "Friendship is magic!^^" << endl; 
    }
    else{
        if(points > 0){
            cout << "Mishka" << endl;
        }
        else{
            cout << "Chris" << endl;
        }
    }
    return 0;
};
