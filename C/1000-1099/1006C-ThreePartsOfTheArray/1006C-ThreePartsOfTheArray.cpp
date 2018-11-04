#include <iostream>
using namespace std;

int main(){
    long long int n,i,j;
    cin >> n;
    long long int *di = new long long int [n];
    for(i = 0; i < n; i++){
        cin >> di[i];
    }
    long long int maxsum = 0,maxleft=0,maxright=0;
    maxleft += di[0];
    maxright += di[n-1];  
    for(i = 0,j = n-1; i != n && i < j && j > i;){     
        if(maxleft == maxright){
            maxsum = maxleft;
            //maxleft += di[i];
            //maxright += di[j];
            i++;
            j--;
            maxright += di[j];
            maxleft += di[i];
        }
        else{
            if(maxleft > maxright){
                j--;
                maxright += di[j];
            }
            else{
                i++;
                maxleft += di[i];
            }
        }
    } 
    cout << maxsum << endl;
    return 0;
}
