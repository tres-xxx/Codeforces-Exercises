//with the help of the code posted by fuwutu - Github
#include <algorithm>

#include <iostream>
using namespace std;

struct team{
    int problem;
    int penalty;
};

bool cmp(const team& left, const team& right){
    return left.problem > right.problem
        || ((left.problem == right.problem) 
            && left.penalty < right.penalty );
};

int main(){
    int n,k;
    cin >> n >> k;
    team n_team[n];
    for(int i = 0; i < n; i++){
        cin >> n_team[i].problem >> n_team[i].penalty;
    }
    sort(n_team, n_team + n, cmp);
    k--;
    int count=1;
    //int p_f=k,p_l=k;
    bool out = false;
    for(int f=k-1,l=k+1;(f>=0||l<n)&&out==false;){
        out = true;
        if(n_team[f].problem==n_team[k].problem
            && n_team[f].penalty==n_team[k].penalty){
            //p_f=f;
            out=false;count++;f--;
        }
        if(n_team[l].problem==n_team[k].problem
            && n_team[l].penalty==n_team[k].penalty){
            //p_l=l;
            out=false;count++;l++;
        }
    }
    cout << count;
    return 0;
}