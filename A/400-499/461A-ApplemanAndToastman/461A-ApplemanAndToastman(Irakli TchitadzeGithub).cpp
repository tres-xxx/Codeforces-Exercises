//this code is based on the code uploaded by the user Irakli Tchitadze on github.com
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    long long n, arr[300001], sum, sumA, sumB;
    cin >> n;
    sum = sumA = sumB = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n);
    sumA = sum;
    if(n != 1) sum *= 2; //if there are more than two each element is added one more time
    for(int i = 0; i < (n-2); i++){
        sumB = sumA - arr[i];
        sum += sumB;
        sumA -= arr[i];
    }
    cout << sum << endl;
    return 0;
}
