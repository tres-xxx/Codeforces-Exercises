#include <iostream>
using namespace std;

#include <string.h>

int main(){
    
    int k;
    char s [10001];
    cin >> k >> s;
    
    if(k == 1) cout << s;
    else{
        int sS = strlen(s);
    
        if(sS % k == 0){
            int division = sS/k;
            int alphabet [26]={};
            int first_l = (int)'a';
            //cout << first_l;
        
            for(int i = 0; i < sS; i++ ) alphabet[s[i] - first_l]++;
            
            int check = 0;
            for(int i = 0; i < 26 && check == 0; i++)
                if(alphabet[i]%k != 0) check = 1;
            
            if(check == 0){
                char part_txt[division+1];
                for(int i = 0,j=0; i < 26; i++){
                    if(alphabet[i]!=0){
                        for(int l = 0; l < (alphabet[i]/k);l++,j++)
                            part_txt[j] = (char)(first_l+i);
                        part_txt[j]='\0';
                    }
                }
                for(int i = 0; i < k; i++) cout << part_txt;
            }
            else cout << "-1";
            
        }
        else cout << "-1";
    }
    
    return 0;
}