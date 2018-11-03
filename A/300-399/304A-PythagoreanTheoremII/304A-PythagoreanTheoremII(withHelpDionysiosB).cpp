//with the help of the code posted by DioysiosB - Github
#include <math.h>
#include <iostream>
using namespace std;

int main(){
    long n; //the top number
    cin >> n;
    long n_n = n*n;
    long answer=0;
    for(long a = 1; a <= n; a++){
        for(long b = a; b <= n; b++){ //b = a because b is always greater or equal to a
            long c = (a*a) + (b*b);
            if(c > n_n){ break; } //check the square
            int temp = sqrt(c); //integer number?
            temp*=temp;
            //cout << "-" << a << " " << b << endl;
            //cout << temp << " " << c << endl;
            if(temp == c){answer++;} //exact root?
        }
    }
    
    cout << answer;
    
    return 0;
};