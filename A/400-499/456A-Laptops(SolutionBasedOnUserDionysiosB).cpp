//Solution based on the code posted by DionysiosB

#include <algorithm>
#include <vector>
#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    std::vector<std::pair<int,int> >list(n);
    for(int i = 0; i<n; i++){
        cin >> list[i].first >> list[i].second;
    }
    sort(list.begin(), list.end());
    short less = 0;
    for(int i = 0; i < n-1; i++){
        if(list[i].second > list[i+1].second){less=1;break;}
    }
    if(less){cout << "Happy Alex";}
    else{cout << "Poor Alex";}
    
    return 0;
};