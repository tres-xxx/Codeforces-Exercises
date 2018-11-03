//code writed by jackiehluo on Github
#include <iostream>
using namespace std;

int main(){
    long n, temp;
    cin >> n;
    long f = 0, s = 0, t = 0;
    for(long i = 0; i < n; i++){
        cin >> temp;
        f+=temp;
    }
    for(long i = 1; i < n; i++){
        cin >> temp;
        s+=temp;
    }
    for(long i = 2; i < n; i++){
        cin >> temp;
        t+=temp;
    }
    cout << f - s << endl;
    cout << s - t << endl;
    return 0;
}
