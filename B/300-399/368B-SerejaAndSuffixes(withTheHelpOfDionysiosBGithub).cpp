//with the help of the code posted by DionysiosB - Github

#include <set>
#include <iostream>
using namespace std;

int main(){
    long n,m; //n = size of the array 'an'
    cin >> n >> m;
    long *an = new long[n]; //first array
    long *tailUniques = new long[n];
    for(long k = 0; k < n; k++){
        cin >> an[k];
    }
    set<long> distinct; //organize the numbers
    for(long k = n-1; k >= 0; k--){
        distinct.insert(an[k]);
        tailUniques[k] = distinct.size(); //size of the array distinct
        //cout << tailUniques[k] << endl;
    }
    //cout << "-----" << endl;
    for(long k = 0,index; k < m; k++){
        cin >> index;
        cout << tailUniques[index-1] << endl;
    }
    
    return 0;
};