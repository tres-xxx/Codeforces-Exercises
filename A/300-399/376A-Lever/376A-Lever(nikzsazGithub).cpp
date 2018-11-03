//this solution has been posted by user nikzsaz on Github.com
#include <string>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    long long pivot,left,right;
    pivot = s.find('^');
    left = right = 0;
    //weight = mass * distance_to_the_pivot
    for(int i = 0; i < pivot; i++){
        if(s[i] != '='){
            left += (pivot-i)*(s[i]-'0');
        }
    }
    for(int i = pivot+1; i < s.size(); i++){
        if(s[i] != '='){
            right += (i-pivot)*(s[i]-'0');
        }
    }
    if(left > right){ cout << "left"; }
    else{
        if(right > left){ cout << "right"; }
        else{ cout << "balance"; }
    }
    cout << endl;
    
    return 0;
}
