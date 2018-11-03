#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *track = new int [n];
    for(int i = 0; i < n; i++){
        cin >> track[i];
    }
    int max = 0;
    for(int i = 1; i < n-1; i++){
        int max2 = 0;
        for(int j = 0; j < n-1; j++){
            int t;
            if(j+1 == i && j+1!=n-1){
                t = track[j+2]-track[j];
                j++;
            }
            else{
                t = track[j+1]-track[j];
            }
            if(t > max2){max2 = t;}
        }
        if(max == 0 || max2 < max){
            max = max2;
        }
    }
    cout << max;
    return 0;
}