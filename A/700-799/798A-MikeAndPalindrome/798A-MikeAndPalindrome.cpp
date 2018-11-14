#include <string>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sizeS,differ,left,right;
    right = sizeS = s.size();
    sizeS /= 2; 
    differ = 0; //top is 2
    left = 0;
    right--;
    for(int i = 0; i < sizeS; i++){
        if(s[left] != s[right]){
            differ++;
            if(differ == 2) break;
        }
        left++;
        right--;        
    }
    if(differ == 0){
        if(s.size()%2 != 0) differ++;
    }
    string palin = (differ < 2 && differ > 0) ? "YES" : "NO";
    cout << palin << endl;
    return 0;
}
