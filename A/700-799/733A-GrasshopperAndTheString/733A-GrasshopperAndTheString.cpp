#include <string>
#include <iostream>
using namespace std;

int main(){
    string paper;
    cin >> paper;
    int jump_ability = 0,p = -1,substract;
    for(int i = 0; i < paper.size(); i++){
        if(paper[i] == 65 || paper[i] == 69 ||
            paper[i] == 73 || paper[i] == 79 ||
            paper[i] == 85 || paper[i] == 89){
            substract = i-p;
            p = i;
            if(substract > jump_ability) jump_ability = substract;
        }
    }
    substract = paper.size() - p;
    if(substract > jump_ability) jump_ability = substract;
    cout << jump_ability << endl;
    return 0;
}
