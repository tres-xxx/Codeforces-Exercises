#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long level = 1;
    long sum_cubes = 1;
    long level_cubes = 1;
    while(sum_cubes <= n){
        level++;
        level_cubes = level_cubes + level;
        sum_cubes = sum_cubes + level_cubes; 
    }
    level--;
    cout << level << endl;
    return 0;
};
