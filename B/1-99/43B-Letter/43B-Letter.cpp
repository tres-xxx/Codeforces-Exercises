/*
NOT WORKING!!!

#include <string.h>
#include <iostream>
using namespace std;

int main(){
    char letter_1[201];
    char letter_2[201];
    cin >> letter_1 >> letter_2;
    int size_1,size_2;
    size_1 = strlen(letter_1);
    size_2 = strlen(letter_2);
    int amount_1[52]; //first letter upcase
    int amount_2[52];
    for(int i = 0; i < size_1 || i < size_2; i++){
        if(i < size_1){
            if((int)letter_1[i] != 32){
                if((int)letter_1[i] < 91)
                    amount_1[(int)letter_1[i] - 65]++;
                
                else
                    amount_1[((int)letter_1[i] - 97) + 26]++;
            }
        }
        if(i < size_2){
            if((int)letter_2[i] != 32){
                if((int)letter_2[i] < 91)
                    amount_2[(int)letter_2[i] - 65]++;
                
                else
                    amount_2[((int)letter_2[i] - 97) + 26]++;
            }
        }
    }
    int check = 0;
    /*for(int i = 0; i < 52 && check == 0; i++){
        cout << "IN";
        cout << amount_1 << " " << amount_2;
        if(amount_2[i] > amount_1[i]){ //check = 1;
        cout << "IN";
        }
    }// /
    if(check == 0) cout << "YES";
    else cout << "NO";
    cout << check;
    return 0;
}*/
//based on this page http://blog.csdn.net/geekdoe/article/details/50697280
//this is important because I had some problems doing it, and the array didn't work
//checking what was the error
#include <cstring>
#include <iostream>
using namespace std;

int main(){
    int len1,len2,t,flag,num[70];
    string s1,s2; //the two texts
    getline(cin,s1); //text 1
    getline(cin,s2); //text 2
    memset(num,0,sizeof(num)); //changes an especifical section of the array
                               //for the character that you wants
                               //Why to use sizeof instead of the number 70?, is not the same
    flag = 1;
    len1 = s1.size(); //length text 1
    len2 = s2.size(); //length text 2
    
    for(int i = 0; i < len1; i++){
        t = s1[i] -'A';
        num[t]++;
    }
    
    for(int i = 0; i < len2; i++){
        t = s2[i] - 'A';
        num[t]--;
        if(num[t] < 0){
            flag = 0;
            break;
        }
    }
    
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}