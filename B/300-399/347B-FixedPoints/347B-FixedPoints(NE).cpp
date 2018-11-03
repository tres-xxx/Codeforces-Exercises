#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *ai = new int[n];
    int fixed = 0;
    int first = -1,last;
    for(int i = 0; i < n; i++){
        cin >> ai[i];
        if(ai[i] == i){
            fixed++;
        }
        else{
            if(first == -1) first = i;
            last = i;
        }
    }
    int max_f = 1;
    for(int i = first; i <= last; i++){
        if(ai[i] != i){
            if(ai[ai[i]-1] == i){
                max_f = 2;
                break;            
            }
        }
    }
    cout << fixed + max_f << endl;
    return 0;
}
