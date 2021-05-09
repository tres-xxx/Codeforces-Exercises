#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *people = new int [n];
    int *queue = new int [n];
    for(int i = 0; i < n; i++){
        cin >> people[i];
    }
    for(int i = 0; i < n; i++){
        queue[i] = 0;
        for(int j = 0; j < people[i]; j++){
            int t;
            cin >> t;
            queue[i] += ((t*5)+15);
        }
    }
    sort(queue, queue+n);
    cout << queue[0] << endl;
    return 0;
}
