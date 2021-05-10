//with the help of the code posted by DionysiosB Github
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long n;
    cin >> n;
    
    std::vector<long> array(n,0);
    for(long i = 0; i < n; i++){ //get all the numbers
        cin >> array[i];
    }
    
    bool breakpoint = false, done = false, possible = true;
    long start = 1, end = 1;
    
    for(int i = 0; i < n-1; i++){
        if(array[i]>array[i+1] && !breakpoint){ //first point
            breakpoint = true;
            start = i+1;
            continue;
        }
        if(array[i]<array[i+1] && breakpoint && !done){ //last point
            done = true;
            end = i+1;
            continue;
        }
        if(array[i]>array[i+1] && done){ //contradiction, last point already true
            possible = false;
            break;
        }
    }
    
    if(possible && breakpoint && !done){
        end = n; //it covers until the last number
    }
    //first number greater than the first number after the end
    if((start > 1 && array[start-2] > array[end-1]) || (end < n && array[start-1] > array[end])){
        possible = false;
    }
    
    if(possible){
        cout << "yes" << endl;
        cout << start << " " << end << endl;
    }
    else{
        cout << "no" << endl;
    }
    
    return 0;
};