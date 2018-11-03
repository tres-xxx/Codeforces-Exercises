#include <iostream>
using namespace std;

int main(){
    long long int n, x, distress=0,d;
    cin >> n >> x;
    char a;
    for(long int i = 0; i < n; i++){
        cin >> a >> d;
        if(a == '+')
            x += d;
        else{
            if(x >= d)
                x -= d;
            else
                distress++;
        }
    }
    cout << x << " " << distress << endl;
    return 0;
}
