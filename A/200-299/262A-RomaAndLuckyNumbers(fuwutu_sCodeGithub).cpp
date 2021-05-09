//fuwutu's code Github
#include <string>
#include <iostream>
using namespace std;

int main(){
    int n, k;//n amount of numbers, k limit lucky numbers
    int count = 0;
    cin >> n >> k; 
    
    string number;
    while(n--){
        int lucky = 0;
        cin >> number; //gets the number
        for(size_t i = 0; i < number.length(); ++i){
            if(number[i] == '4' || number[i] == '7'){ 
                lucky++;//checks how many lucky numbers the are
            }
        }
        if(lucky <= k){
            count++; //it is in the rule!
        }
    }
    
    cout << count;
    return 0;
}