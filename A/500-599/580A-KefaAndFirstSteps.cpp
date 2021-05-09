#include <iostream>
using namespace std;

int main(){
    long n;
    cin >> n;
    long count_decrease = 0;
    long count_decrease_changing = 0;
    long ai;
    long ai_p = 0;
    while(n--){
        cin >> ai;
        if(ai >= ai_p){
            count_decrease_changing++;
            if(count_decrease < count_decrease_changing){
                count_decrease = count_decrease_changing;
            }
        }
        else{
            count_decrease_changing = 1;
        }
        ai_p = ai;
    }
    cout << count_decrease << endl;
    return 0;
}
