#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	long t,n;
	cin >> t;
	long ans[t];
	for(long i = 0; i < t; i++){
		cin >> n;
		long ai[n], ai2[n];
		for(long j = 0; j < n; j++){ cin >> ai[j]; ai2[j] = ai[j]; }
		if(n == 1){ ans[i] = 1; }
		else{
			sort(ai, ai+n);
			bool won = false;
			long count = 1;
			for(long j = 1; j < n; j++){
				if(ai[j] == ai[j-1]){ count++; }
				else{
					if(count == 1){ ans[i] = ai[j-1]; won = true; break; }
					else{ count = 1; }
				}
			}
			if(!won and count != 1){ ans[i] = -1; }
			else{
				if(count == 1 and !won){ ans[i] = ai[n-1]; }
				int index = 0;
				while(ans[i] != ai2[index]){ index++; }
				ans[i] = ++index;
			}
		}
	}
	for(long i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
