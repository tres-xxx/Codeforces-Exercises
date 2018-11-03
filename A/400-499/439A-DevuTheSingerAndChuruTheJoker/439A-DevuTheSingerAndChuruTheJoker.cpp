#include <iostream>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    int t_i = 0; //time of the songs
    int t_r = (n-1)*10; //time of rest
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        t_i = temp + t_i;
    }
    if((t_i+t_r)>d) cout << "-1";
    else{
        int t_c = (d-t_i)/5;
        cout << t_c;
    }
    return 0;
}