//this code has been posted by DionysiosB on Github
#include <vector>
#include <iostream>
using namespace std;

int digitSum(long long input){
    int output = 0;
    while(input > 0){
        output += (input%10);
        input /= 10;
    }
    return output;
}

long long myPower(long base, long exponent){ 
    long long output = 1;
    for(int i = 0; i < exponent; i++)
        output *= base;
    return output;
}

int main(){
    const int M = 1e9, N = 81; //why 81 and 1e9?
    long a,b,c;
    cin >> a >> b >> c;
    vector<long long> solutionVec;

    for(int i = 1; i < N; i++){
        long long candidate = b * myPower(i, a) + c;
        if(digitSum(candidate) == i && candidate < M)
            solutionVec.push_back(candidate);
    }

    cout << solutionVec.size() << endl;
    for(int i = 0; i < solutionVec.size(); i++){
        cout << solutionVec[i] << " ";
    }
    return 0;
}
