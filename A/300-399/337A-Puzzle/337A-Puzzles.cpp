#include <iostream>
using namespace std;

#include <stdlib.h>
#include <algorithm>

int main(){
    /*int students,pieces,f,substract;
    cin >> students >> pieces >> f;
    substract=abs(f-students);
    int near = f;
    for(int i = 1; i < pieces; i++){
        int temp;
        cin >> f;
        temp = abs(f-students);
        if(temp < substract){
            near = f;
            substract =temp;
            if(temp == 0) i = pieces;
        }
    }
    cout << near;*/
    int n,m;
    cin >> n >> m;
    int pieces[50];
    for(int i = 0; i < m; i++)
        cin >> pieces[i];
    sort(pieces,pieces+m);
    int nearest = 1000;
    for(int min = 0, max = n-1; max < m; min++, max++){
        int temp = pieces[max]-pieces[min];
        if(temp < nearest) nearest = temp;
    } 
    cout << nearest;
    return 0;
    
}