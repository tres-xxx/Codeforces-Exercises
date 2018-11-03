//this code has been wroten by DionysiosB and posted on Github
#include <string>
#include <cstdlib>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    const int N = 4;
    vector<int> lengthVec(N);
    for(int i = 0; i < N; i++){
        string temp;
        cin >> temp;
        lengthVec[i] = temp.size() -2;
    }
    int found = -1;
    for(int i = 0; i < N; i++){
        //The test is defined by the biggest number
        if(lengthVec[i] >= (2*lengthVec[(i+1)%N]) 
            && lengthVec[i] >= (2*lengthVec[(i+2)%N])
            && lengthVec[i] >= (2*lengthVec[(i+3)%N])){
            if(found < 0){
                found = i;
            }
            else{
                found = 2;
                break;
            }
        }
        //The test is defined by the smaller number
        if((2*lengthVec[i]) <= lengthVec[(i+1)%N] 
            && (2*lengthVec[i]) <= lengthVec[(i+2)%N]
            && (2*lengthVec[i]) <= lengthVec[(i+3)%N]){
            if(found < 0){
                found = i;
            }
            else{
                found = 2;
                break;
            }
        }
    }
    if(found < 0) found = 2;
    char option = 'A' + found;
    cout << option << endl;
    return 0;
}
