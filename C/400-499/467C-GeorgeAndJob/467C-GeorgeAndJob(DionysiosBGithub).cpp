//this code has been posted by DionysiosB on Github.com
#include <vector>
#include <iostream>
using namespace std;

int main(){
    long n,m,k;
    cin >> n >> m >> k;
    vector<long long> array(n);
    long long cumsum = 0;
    for(long i = 0; i < n; i++){
        long temp;
        cin >> temp;
        cumsum += temp;
        array[i] = cumsum;
    }
    vector<vector<long long> > matrix(n, vector<long long>(k, 0));
    for(long col = 0; col < k; col++){
        matrix[m-1][col] = array[m-1];
    }
    for(long row = m; row < n; row++){
        for(long col = 0; col < k; col++){
            matrix[row][col] = matrix[row-1][col];
            long long candidate = (col > 0 ? matrix[row-m][col-1] : 0) + (array[row] - array[row-m]);
            if(candidate > matrix[row][col]){
                matrix[row][col] = candidate;
            }
        }
    }
    cout << matrix[n-1][k-1] << endl;
    return 0;
}
