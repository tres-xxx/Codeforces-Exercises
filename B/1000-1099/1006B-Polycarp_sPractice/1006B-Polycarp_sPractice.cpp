#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int *ai = new int [n];
    int *aisort = new int[n];
    for(int i = 0; i < n; i++){
        cin >> ai[i];
        aisort[i] = ai[i];
    }
    sort(aisort,aisort+n);
    int *problems = new int [k];
    long long int totalprofit = 0;
    for(int i = 0,j=n-1; i < k; i++){
        totalprofit += aisort[j];
        j--;
    }
    int sumday=0,sump=0;
    bool find = false;
    for(int i = 0,indexp = 0; i < n; i++){
        sumday++;
        for(int j = 0,l=n-1; j < k; j++){
            if(ai[i] == aisort[l]){
                aisort[l] = 0;
                find = true;
                break;
            }
            l--;
        }
        if(find){
            sump += sumday;
            problems[indexp] = sumday;
            sumday = 0;
            indexp++;
            find = false;
        }
    }
    problems[k-1]+=(n-sump);
    cout << totalprofit << endl;
    cout << problems[0];
    for(int i = 1; i < k; i++){
        cout << " " << problems[i];
    }
    cout << endl;
    return 0;
}
