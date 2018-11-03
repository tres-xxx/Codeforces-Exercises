#include <string>
#include <iostream>
using namespace std;

int main(){
    string to_print;
    cin >> to_print;
    int position = 97;
    int movements = 0;
    for(int i = 0; i < to_print.size(); i++){
        if(to_print[i] != position){
            int left,right;
            if(to_print[i] > position){
                right = to_print[i] - position;
                left = (position-97)+(122-to_print[i])+1;
            }
            else{
                right = (122-position)+(to_print[i]-97)+1;
                left = position - to_print[i];
            }
            movements += (left < right) ? left : right;
        }
        position = to_print[i];
    }
    cout << movements << endl;
    return 0;
}
