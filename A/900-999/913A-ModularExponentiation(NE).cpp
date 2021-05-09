#include <iostream>
using namespace std;

int main(){
    long long int n, m,expo=1; 
    cin >> n >> m;
    while(n > 0){
        expo = expo*2;
        n--;
    }
    cout << m%expo << endl;
    return 0;
}
