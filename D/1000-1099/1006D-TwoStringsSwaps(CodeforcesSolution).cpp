//solution posted by NeOn25 on Codeforces's contest solution
#include <map>
#include <iostream>
using namespace std;

#define forn(i,n) for(int i = 0; i < int(n); i++)
#define sz(a) int(a.size())

int n;
string s,t;

bool read(){
    if(!(cin >> n >> s >> t)){
        return false;
    }
    return true;
};

void solve(){
    int ans = 0;
    forn(i, n/2){
        map<char, int> a;
        a[s[i]]++; a[s[n-i-1]]++;
        a[t[i]]++; a[t[n-i-1]]++;
        int tsz = sz(a);
        if(tsz == 4){
            ans += 2;
        }
        else{
            if(tsz == 3){
                ans += 1 + (s[i] == s[n-i-1]); //1 + true? -- true = 1?
            }
            else{
                if(tsz == 2){
                    ans += a[s[i]] != 2; //?? 1 or 0
                }
            }
        }
    }
    if(n%2 == 1 && s[n/2] != t[n/2]){
        ans++;
    }
    cout << ans << endl;
};

int main(){
    /*while(read()){ //ask at least two times for read()?
        if(read()){
            solve();
            break;
        }
    }*/
    read();
    solve();
    return 0;
}
