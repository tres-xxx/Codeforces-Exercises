#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int c=0,bi=0,ba=0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        switch(i%3){
            case 0: c+=a;break;
            case 1: bi+=a;break;
            case 2: ba+=a;break;
            default: cout << "error";
        }
    }
    //cout << c << " " << bi << " " << ba << endl;
    if(c > bi && c > ba) cout << "chest";
    else{
        if(bi > ba) cout << "biceps";
        else cout << "back";
    }
    return 0;
}