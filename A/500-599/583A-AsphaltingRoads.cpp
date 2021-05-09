//solution based on code posted by user cloudzfy on github.com
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n,h,v;
    cin >> n;
    //my solution does not work, the worst programmer! hurray!
    /*int rn[n+2][n+2] = {};
    int day[n];
    int h,v,as,d=0,hl,hr,vl,vr;
    for(int i = 0; i < (n*n); i++){
        cin >> h >> v;
        hl = h-1;hr = h+1;
        vl = v-1;vr = v+1;
        as = rn[hl][v] + rn[hr][v] + rn[h][vl] + rn[h][vr];
        if(as != 1 || (rn[hl][vl]==0 && rn[hl][vr]==0 && rn[hr][vl]==0 && rn[hr][vr]==0)){
            rn[hl][v] = 1;
            rn[hr][v] = 1;
            rn[h][vr] = 1;
            rn[h][vl] = 1;
            rn[h][v] = 1;
            day[d] = i+1;
            d++;
        }
        /*
        for(int n1 = 0; n1 < n+2; n1++){
            for(int n2 = 0; n2 < n+2; n2++)
                cout << rn[n1][n2];
            cout << endl;
        }
    }
    cout << day[0];
    for(int i = 1; i < d; i++) cout << " " << day[i];
    cout << endl;*/
    vector<bool> r(n, false), c(n,false); //vectors to check that the road has not been asphalted
    vector<int> a; //days in which the road is asphalted
    for(int i = 0; i < (n*n); i++){
        cin >> h >> v;
        if(!r[h-1] && !c[v-1]){ //it checks if the roads in the intersection has been asphalted
            r[h-1] = true; c[v-1] = true; //sets the new values if had not been asphalted
            a.push_back(i+1); //set the day
        }
    }
    cout << a[0];
    for(int i = 1; i < a.size(); i++) cout << " " << a[i];
    cout << endl;
    return 0;
}
