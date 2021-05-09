#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *array = new int[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    sort(array, array + n);
    int position_zero = 1;
    for(int i = 0; i < n; i++){
        if(array[i] == 0){
            position_zero = i;
        }
    }
    cout << "1 " << array[0] << endl;
    if(position_zero % 2 == 0){
        if((n-1) == position_zero){
            cout << "2 " << array[1] << " " << array[2] << endl;
            cout << n-3;
            for(int i = 3; i < n; i++){
                cout << " " << array[i];
            }
        }
        else{
            cout << n-(position_zero+1);
            for(int i = position_zero+1; i < n; i++){
                cout << " " << array[i];
            }
            cout << endl;
            cout << position_zero;
            for(int i = 1; i <= position_zero; i++){
                cout << " " << array[i];
            }
        }
    }
    else{
        if(position_zero != 1){
            cout << position_zero-1;
            for(int i = 1; i < position_zero; i++){
                cout << " " << array[i];
            }
            cout << endl;
            cout << n-position_zero;
            for(int i = position_zero; i < n; i++){
                cout << " " << array[i];
            }
        }
        else{
            cout << n-position_zero-1;
            for(int i = position_zero+1; i<n; i++){
                cout << " " << array[i];
            }
            cout << endl;
            cout << "1 " << array[position_zero];
        }
    }
    cout << endl;
    return 0;
}