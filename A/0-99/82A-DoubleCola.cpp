#include <string>
#include <iostream>
using namespace std;

int main(){
    long n; //position to search
    cin >> n;
    string friends [] = {"Sheldon","Leonard","Penny","Rajesh","Howard"};
    int position; //find the person
    int group = 1; //group of 2,4,8,16,...
    int infinite = 5; //it justs sums and it is stablished at the end of the search
    while(infinite < n){
        group*=2; //grows by 2
        infinite += (group*5); //sets the end position
    }
    int new_infinite;
    for(position = 4; position >= 0; position--){
        new_infinite = infinite-group;
        if(infinite >= n && new_infinite < n){
            break;
        }
        infinite = new_infinite;
    }
    cout << friends[position] << endl;
    return 0;
}
