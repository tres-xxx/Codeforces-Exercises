#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    static int students = 3;
    int x_i[students];
    for(int i = 0; i < students; i++){
        cin >> x_i[i];
    }
    sort(x_i,x_i + students);
    int distance = (x_i[1]-x_i[0]) + (x_i[2]-x_i[1]);
    cout << distance << endl;
    return 0;
};
