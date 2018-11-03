#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int alphabet = 26;
    std::vector<long long> vectorA(alphabet, 0); //each letter have 0
    //letter A = 0 || 0 = 0
    //letter B = 1 || 1 = 0 ....
    long long n, k;
    cin >> n >> k;
    //std::string cards;
    //getline(std::cin, cards);
    string cards;
    cin >> cards;
    
    for(int i = 0; i < cards.size(); i++){
        vectorA[cards[i] - 'A']++; //there is a letter
    }
    
    sort(vectorA.begin(), vectorA.end());
    
    long long points = 0;
    for(int i = vectorA.size()-1; i >= 0; i--){
        if(vectorA[i] < k){
            points += vectorA[i]*vectorA[i]; 
            k -= vectorA[i];
        }
        else{
            points += k*k;
            break;
        }
    }
    
    cout << points << endl;
    
    return 0;
}