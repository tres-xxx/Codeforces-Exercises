#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *ai = new int [n];
    bool *used_ai = new bool [n];
    int max_s = 0;
    for(int i = 0; i < n; i++){
        cin >> ai[i];
        max_s += ai[i];
        used_ai[i] = false;
    }
    max_s = max_s/(n/2);
    for(int i = 0; i < n; i++){
        if(used_ai[i] == false){
            used_ai[i] = true;
            cout << i+1 << " ";
            for(int j = i+1; j < n; j++){
                if(ai[i]+ai[j] == max_s && used_ai[j] == false){
                    cout << j+1 << endl;
                    used_ai[j] = true;
                    break;
                }
            }
        }
    }
    return 0;
}
