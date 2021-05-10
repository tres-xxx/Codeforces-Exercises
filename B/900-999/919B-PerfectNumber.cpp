#include <iostream>
using namespace std;

int main(){
    /* My own solution does not work, the worst programmer!, hurray!
    string k;
    cin >> k;
    int ten = 0;
    for(int i = 0; i < k.size(); i++)
        ten += k[i]-48;
    //if(k.size() == 1)
    //    k = k + to_string(10-ten);
    //else
    //    k[k.size()-1] = ((10-ten)+1)+48;
    k = k + to_string(10-ten);
    cout << k << endl;*/

    //this code is the solution posted in coolforces.blogspot.com
    int n,s=10,cn,cp;
    cin >> n;
    while(n--){
        s += 9; //the nearest 10? ==> 10, 19, 28, 37, 46,...
        cp = s;
        cn = 0;
        while(cp){ //get the sum of all the digits
            cn += cp%10;
            cp /= 10;
        }
        if(cn != 10) n++; //number incorrect so it elongs possibilities of n
    }
    cout << s << endl;
    return 0;
}
