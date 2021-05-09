//code writed by DionysiosB on Github
#include <vector>
#include <set>
#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    int n, m; //n = number of employees || m = number of languages
    cin >> n >> m;
    std::vector<std::set<int> > connected;
    int total = 0;
    while(n--){
        int k; //# of languages employee x knows
        cin >> k; 
        if(k == 0){
            total++;
            continue; //adds one total and asks for languages of the next employee
        }
        std::vector<int> languages(k, 0);
        for(int i = 0; i < k; i++){
            cin >> languages[i]; //sets all the languages the employee knows
        }
        
        bool belongs = false;
        for(int i = 0; i < connected.size(); i++){
            if(belongs){
                break;            
            }
            for(int j = 0; j < languages.size(); j++){
                if(connected[i].find(languages[j]) != connected[i].end()){
                    for(int k = 0; k < languages.size(); k++){
                        connected[i].insert(languages[k]);
                    }
                    belongs = true;
                    break;
                }
            }            
        }

        if(!belongs){
            set<int> current;
            for(int i = 0; i < languages.size(); i++){
                current.insert(languages[i]);
            }
            connected.push_back(current);
        }
    }

    if(connected.size() > 0){
        vector<bool> unmerged(connected.size(), 1);
        for(int i = 0; i < connected.size(); i++){
            for(int j = i+1; j < connected.size(); j++){
                std::set<int>::iterator myIter = connected[i].begin();
                for(myIter = connected[j].begin(); myIter != connected[j].end(); myIter++){
                    if(connected[i].find(*myIter) != connected[i].end()){
                        unmerged[j] = 0;
                        break;
                    }
                }
                if(!unmerged[j]){
                    for(myIter = connected[i].begin(); myIter != connected[i].end(); myIter++){
                        connected[i].insert(*myIter);
                    }
                }
            }
        }
        for(int i = 0; i < unmerged.size(); i++){
            if(unmerged[i]){
                total++;
            }
        }
        total--;
    }
    cout << total << endl;
    return 0;
};
