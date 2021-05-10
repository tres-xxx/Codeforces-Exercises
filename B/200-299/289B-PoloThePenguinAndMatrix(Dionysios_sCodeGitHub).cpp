//with the help of the code posted by DionysiosB - Github
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n,m; //matrix n x m
    long d,size; //d = substract or add 
    cin >> n >> m >> d;
    size = n*m; //size of the array
    long *aij = new long[size+1]; //aij = index element
    bool exist = true; //d is mcn? mcn=multiplecommonnumber
    for(int i=0,module=0; i < size; i++){
        cin >> aij[i];
        if(exist){
            if(i==0){module = aij[i] % d;}
            if(aij[i] % d != module){exist = false;} //could be a module?
        }
    }
    
    if(exist){
        long long sum = 0;
        sort(aij, aij+size); //order the array to get the value in the middle
        long medium = aij[size/2]; // gets the medium value
        for(int i = 0; i < size; i++){
            sum += abs((aij[i]-medium)/d); //adds the amount of movmenents
        }
        //cout << medium << endl;
        cout << sum;
    }
    else{
        cout << "-1";
    }
    
    return 0;
}