// with the help of the code posted by fuwutu - Github
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m; //n = students || m = subjects
    vector<string> student_mark(n); //size n
    for(int i = 0; i < n; i++){ //all the grades
        cin >> student_mark[i];
    }
    vector<bool> best(n,false); //sets there is no best
    for(int i = 0; i < m; i++){
        char b = '0'; //the minimum grade
        for(int j = 0; j < n; j++){
            if(student_mark[j][i] > b){ //sets the highest grade
                b = student_mark[j][i]; 
            }
        }
        for(int j = 0; j < n; j++){
            if(student_mark[j][i] == b){ //check all the best students
                best[j] = true;
            }
        }
    }
    cout << count(best.begin(), best.end(), true) << endl;
    return 0;
}