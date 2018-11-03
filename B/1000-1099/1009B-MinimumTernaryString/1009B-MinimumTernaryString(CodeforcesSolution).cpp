//solution posted on Educational Codeforces's solution
#include <string>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    string ans;
    int cnt = 0;
    for(auto c : s){
        if(c == '1'){
            cnt++;
        }
        else{
            ans += c; 
        }
    }
    int n = ans.size();
    int pos = -1;
    while((pos+1) < n && ans[pos+1] == '0'){ //it finds all the first zero's and place there all the 1's, because the number 1 can move trough all the array
        pos++;
    }
    ans.insert(pos+1,string(cnt,'1'));
    cout << ans << endl;
    return 0;
}
