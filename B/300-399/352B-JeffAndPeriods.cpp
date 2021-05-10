//This code was writted by me, but doesn't work at all
//A code working is at the end of this file

/*#include <iostream>
using namespace std;

int main(){
    int n,a,t,big;
    cin >> n;
    //int an[a];
    //int atn[a];
    //tn[0]=0;
    //tn[1]='\0';
    //for(int i = 0; i < a; i++){ 
    //    cin >> t[i];
    //    
    //}
    long long an[100000];
    //int t[]
    //for(int i = 0; i < a; i++){
    //    int temp;
    //    cin << temp;
    //    if(an[temp] != 0)
    //}
    t = 0;
    big = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(an[a] == 0){
            if(big < a) big = a;
            t++;
            if(i == 0) an[a] = -99999;
            else an[a] = -1*(i);
        } 
        else{
            if(an[a] < 0){
                if(an[a] == -99999) an[a] = i;
                else{
                    an[a] = i+an[a];
                } 
            }
        }
    }
    cout << t << "\n";
    big++;
    for(int i = 0; i < big+1; i++){
        if(an[i] < 0) cout << i << " 0" << "\n";
        else{
            if(an[i] > 0) cout << i << " " << an[i] << "\n";
        }
    }
    return 0;
}*/

//Code by Hamed
//https://github.com/YoungNFoolish/Codeforces-Accepted-Solutions/blob/master/352B.%20Jeff%20and%20Periods

/*#include <iostream>
#include <map>
using namespace std;

#define Max 100001

int main(){
    int n,t,counter[Max]={0};
    
    map<int, int> lastPosition, period;
    map<int, bool> fail;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> t;
        
        if(counter[t] == 0){
            counter[t]++;
            lastPosition[t] = i;
            period[t] = 0;
            fail[t] = false;
        }
        else{
            if(counter[t] == 1){
                counter[t]++;
                period[t] = i - lastPosition[t];
                lastPosition[t] = i;
            }
            else{
                if(counter[t] == 2){
                    counter[t]++;
                    if((i-lastPosition[t]) != period[t]){
                        fail[t] = false;
                        continue;
                    }
                    period[t] = i - lastPosition[t];
                    lastPosition[t]=i;
                }
                else{
                    counter[t]++;
                    if(fail[t] == true) continue;
                    else{
                        if((i - lastPosition[t]) != period[t]){
                            fail[t] = true;
                            continue;
                        }
                    }
                    period[t] = i-lastPosition[t];
                    lastPosition[t] = i;
                }
            }
        }
    }
    
    t = 0;
    
    for(map<int,bool>::iterator it = fail.begin();it != fail.end(); it++)
        if(it->second == false) t++;
    
    cout << t << endl;
    
    if(t!=0){
        for(map<int,int>::iterator it = period.begin(); it != period.end();it++){
            if(fail[it->first] == false) cout << it->first<<" "<<it->second<<endl;
        }
    }
    
    return 0;
    
}

/*#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n, temp;
	int counter[100001] = { 0 };
	map<int, int> lastPosition, period;
	map<int, bool> fail;
	cin >> n;

	for (int index= 0; index < n; index++)
	{
		cin >> temp;
		if (counter[temp] == 0)
		{
			counter[temp]++;
			lastPosition[temp] = index;
			period[temp] = 0;
			fail[temp] = false;
		}
		else if (counter[temp] == 1)
		{
			counter[temp]++;
			period[temp] = index - lastPosition[temp];
			lastPosition[temp] = index;
		}
		else if (counter[temp] == 2)
		{
			counter[temp]++;
			if ((index - lastPosition[temp]) != period[temp])
			{
				fail[temp] = true;
				continue;
			}
			period[temp] = index - lastPosition[temp];
			lastPosition[temp] = index;
		}
		else
		{
			counter[temp]++;
			if (fail[temp] == true)
			{
				continue;
			}
			else if ((index - lastPosition[temp]) != period[temp])
			{
				fail[temp] = true;
				continue;
			}
			period[temp] = index - lastPosition[temp];
			lastPosition[temp] = index;
		}
	}

	temp = 0;
	for (map<int, bool>::iterator it = fail.begin(); it != fail.end(); it++)
	{
		if (it->second == false)
		{
			temp++;
		}
	}

	cout << temp << endl;
	if (temp != 0)
	{
		for (map<int, int>::iterator it = period.begin(); it != period.end(); it++)
		{
			if (fail[it->first] == false)
			{
				cout << it->first << " " << it->second << endl;
			}
		}
	}
	
	return 0;
}*/

#include <stdio.h>
#include <string.h>

#define MAXN 100001

int Last[MAXN];
int Ans[MAXN];

int main()
{
    int N, Num, i, Now, Cnt;
    scanf("%d", &N);
    memset(Ans, -1, sizeof(Ans));
    for(i = 1; i <= N; ++i) {
        scanf("%d", &Num);
        if(Last[Num] == 0) {
            Ans[Num] = 0;
        } else {
            Now = i - Last[Num];
            if(Ans[Num] == 0) {
                Ans[Num] = Now;
            } else if(Ans[Num] != Now) {
                Ans[Num] = -1;
            }
        }
        Last[Num] = i;
    }
    for(Cnt = 0, i = 1; i < MAXN; ++i) {
        if(Ans[i] != -1) {
            ++Cnt;
        }
    }
    printf("%d\n", Cnt);
    for(i = 1; i < MAXN; ++i) {
        if(Ans[i] != -1) {
            printf("%d %d\n", i, Ans[i]);
        }
    }
    return 0;
}