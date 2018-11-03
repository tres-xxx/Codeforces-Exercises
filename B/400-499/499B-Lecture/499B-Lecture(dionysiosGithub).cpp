//code posted by DionysiosB on Github
#include <cstdio>
#include <string>
#include <map>
#include <iostream>
using namespace std;

int main(){
    long n,m;
    cin >> n >> m;
    map<string,string> write;
    while(m--){
        string first,second;
        cin >> first >> second;
        if(first.size() <= second.size()){
            second = first;//this is made for save the smallest one
        }
        write.insert(pair<string,string>(first,second));
    }

    string words[n];
    for(long i = 0; i < n; i++){
        string temp; //words the professor said
        cin >> temp;
        words[i] = write[temp];
        //cout << write[temp] << " ";
    }
    cout << words[0];
    for(long i = 1; i < n; i++){
        cout << " " << words[i];
    }
    //puts("");
    cout << endl;
    return 0;
}
