//this code has been written by jackiehluo on Github
#include <iostream>
using namespace std;

int main(){
    int a[1000]; //1000 = max amount of players
    int n,m,k; //n = type soldiers|m=amount players|k=top differences
    cin >> n >> m >> k;
    
    for(int i = 0; i < m+1; i++){
        cin >> a[i]; //type of soldiers of the player m
    }

    int friends = 0;
    
    for(int i = 0; i < m; i++){
        int t = 0;
        for(int j = 0; j < n; j++){
            if(((a[i] >> j) & 1) != ((a[m] >> j) & 1)){ //??? I don't get it :/
                t++;
            }
        }
        if(t <= k){ //the problem doesn't say at least k? :s
            friends++;
        }
    }

    cout << friends << endl;
    return 0;
}
