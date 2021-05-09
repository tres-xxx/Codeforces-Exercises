#include <string>
#include <iostream>
using namespace std;

int main(){
    int n;
    string cross;
    cin >> n >> cross;
    int group = 0;
    int size_group [52]={};
    for(int i = 0; i < cross.size(); i++){
        if(cross[i] == 'B'){
            size_group[group]++;
        }
        else{
            if(size_group[group] != 0){
                group++;
            }
        }
    }
    if(size_group[group] != 0){
        group++;    
    }
    cout << group << endl;
    if(group != 0){
        cout << size_group[0];
        for(int i = 1; i < group; i++){
            cout << " " << size_group[i];
        }
        cout << endl;
    }
    return 0;
}
