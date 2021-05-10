#include <string>
#include <iostream>
using namespace std;

int main(){
    String recipe;
    int nb,ns,nc,pb,ps,pc;
    int cb,cs,cc, hamburger;
    long long int r;
    cin >> recipe;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    hamburger = cs = cc = cb = 0;
    for(int i = 0; i < recipe.size(); i++){
        switch(recipe[i]){
            case 'B': cb++; break;
            case 'S': cs++; break;
            case 'C': cc++; break;
            default: cout << "error" << endl; return 0;
        }
    }
    
    return 0;
}
