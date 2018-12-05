//this code has been corrected using the solution posted by user msdeep14 on github.com
//#include <utility>
#include <algorithm>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
    double r,x,y,x1,y1,hyp;
    cin >> r >> x >> y >> x1 >> y1;
    //probably this solutions are not going to work at all the cases
    /*if(x != x1 && y != y1) hyp = sqrt(pow(x-x1,2) + pow(y-y1,2)) - r;
    else{
        if(x == x1 && y == y1) hyp = 0;
        else hyp = max(abs(x-x1), abs(y-y1)) - r;
    }*/
    hyp = sqrt(pow(x-x1,2) + pow(y-y1,2));
    /*
    int div = hyp / r;
    //cout << div << " " << hyp;
    if(hyp%r == 0) hyp = div;
    else hyp = div+1;
    //hyp /= r;
    //if(x != x1 && y != y1) md = max(abs(x-x1), abs(y-y1));
    //else md = min(abs(x-x1), abs(y-y1));*/
    cout << ceil(hyp/(2*r));
    //cout << hyp << endl;
    return 0;
}
