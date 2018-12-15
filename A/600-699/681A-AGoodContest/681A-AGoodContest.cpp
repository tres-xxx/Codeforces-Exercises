#include <string>
#include <iostream>
using namespace std;

/*int getN(string n, int &p){
    int b = 0;
    for(p; p < n.size() && n[p] != ' '; p++){
        b *= 10;
        b += n[p]-48;
    }
    return b;
}*/

int main(){
    int n;
    cin >> n;
    string participant;
    bool better = false;
    for(int i = 0; i < n; i++){
        cin >> participant;
        int before,after;
        cin >> before >> after;
        if(!better){
            /*int before,after;
            for(int j = 0; j < participant.size(); j++){
                cout << j << endl;
                if(participant[j] == ' '){
                    cout << "here?" << endl;
                    int k = j+1;
                    if(participant[k] = '-'){
                        before = -1;
                        k++;
                    }
                    else before = 1;
                    before *= getN(participant,k);
                    k++;
                    if(participant[k] = '-'){
                        after = -1;
                        k++;
                    }
                    else after = 1;
                    after *= getN(participant,k);
                    break;
                }
            }*/
            if(before >= 2400 && after > before) better = true;
        }
    }
    if(better) cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}
