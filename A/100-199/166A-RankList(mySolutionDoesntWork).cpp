#include <utility>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
    return (a.second < b.second);
};

int main(){
    int n=0,k;
    //cin >> n >> k;
    scanf("%d %d",&n,&k);
    std::vector<std::pair<int, int> > team;
    
    for(int i = 1; i <= n; i++){
        int first,second;
        scanf("%d %d",&first,&second);
        team.push_back(std::make_pair(first,second));
        //scanf("%d %d",&team[i].first,&team[i].second);
        //cin >> team[i].first >> team[i].second;
        cout << "fuckyou";
    }
    cout << "fuckyou";
    sort(team.begin(), team.end());//sort all by first element
    int p_f,p_l; //p_f=final position | p_l=initial position
    bool out = false;
    for(int f=k-1,l=k+1;(p_f>=0&&p_l<n)&&out==false;){
        out = true;
        if(team[p_f].first == team[k-1].first){
            p_f=f;f--; out=false;
        }
        if(team[p_l].first == team[k-1].first){
            p_l=l;l++; out=false;
        }
    }
    
    sort(team.begin()+p_f,team.begin()+p_l,sortbysec);
    int count=0;
    for(; p_f <= p_l; p_f++){
        if(team[p_f].second == team[k-1].second){count++;}
    }
    cout << count;
    return 0;
}