/*#include <iostream>
using namespace std;
const int aletters(100000);
const int alphabet(27);

int main(){
    char gen1[::aletters],gen2[::aletters];
    cin >> gen1 >> gen2;
    int gen_character[::alphabet];//97
    int sum = 0;
    
    for(int i = 0; gen2[i] != '\0'; i++){
        gen_character[gen2[i]-97]++;
        sum++;
    }
    for(int i = 0; gen1[i] != '\0' && sum > 0; i++){
        if(gen_character[gen1[i]-97] > 0){
            gen_character[gen1[i]-97]--;
            sum--;
        }
    }
    
    if(sum > 0) cout << "NO";
    else cout << "YES";
    
    return 0;
}*/
//solution https://github.com/fuwutu/CodeForces/blob/master/186A%20-%20Строкосравнитель.cpp
#include <cstdio>
#include <cstring>

int main(){
    char s1[100001],s2[100001];
    scanf("%s%s",s1,s2);
    int len1=strlen(s1),len2=strlen(s2);
    bool same = false;
    if(len1 == len2){
        int diff[3], diffcount(0); //??
        for(int i = 0; i < len1; ++i){
            if(s1[i] != s2[i]){
                diff[diffcount++] = i;
                if(diffcount == 3) break;
            }
        }
        if(diffcount == 2 && s1[diff[0]] == s2[diff[1]] && s1[diff[1]] == s2[diff[0]])
            same = true;
    }
    printf(same ? "YES" : "NO");
    return 0;
}