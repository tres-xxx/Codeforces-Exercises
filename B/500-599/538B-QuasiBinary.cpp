/**
Again, this is not my own solution... the solution is the msdeep14
https://github.com/msdeep14/codeforces/blob/master/538B.cpp
**/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> a; //where is going to be saved the quasibinaries
	while(n){
		int tn = n, m = 0, p = 1;
		while(tn){
			if(tn % 10) m += p; //add the highest number
			tn /= 10; //reduce the action done
			p *= 10; //increase to get the highest number
		}
		a.push_back(m); //set the highest number
		n -= m; //decrease the sum that has been already set
	}
	cout << a.size() << endl; //print the size of the quasibinaries
	//sort(a.begin(), a.end());
	cout << a[0]; 
	for(int i = 1; i < a.size(); i++) cout << " " << a[i];
	cout << endl;
	return 0;
}

/*#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n < 10){
		cout << "1 ";
		for(int i = 1; i < n; i++) cout << " 1";
		cout << endl;
	}
	else{
		bool ten = false;
		int op1 = (n/10)+(n%10);
		int op2 = (n/11);
		if(n%11 == 10){
			ten = true;
		}
		else op2 += (n%11);
		if(op1 < op2){
			for(int i = 0; i <
		}
	}
	return 0;
}*/
