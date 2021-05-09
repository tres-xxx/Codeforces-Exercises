/*#include <iostream>
using namespace std;

#include <algorithm>

struct dragon{
    int strength;
    int bonus;
    dragon *next;
};

int main(){
    int s, n;
    cin >> s >> n;
    dragon first;
    cin >> first.strength >> first.bonus; 
    for(int i = 1; i < n; i++){
        dragon next;
        cin >> next.strength >> next.bonus;
        dragon temp = first;
        if(temp.strength < next.strength){
            next.next = &first;
            first = next;
        } 
        else{
            bool placed = false;
            for(int j = 1; j < i && placed == false; j++){
                if(temp.next != NULL){
                    if(temp.next->strength < next.strength){
                        next.next = temp.next;
                        temp.next = &next;
                        placed = true;
                    }
                    else{
                        if(temp.next->strength == next.strength){
                            temp.next->bonus += next.bonus;
                            placed = true;
                        } 
                        else temp = temp.next;
                    }
                }
                else{
                    temp.next = &next;  
                    placed = true;
                } 
            }
        }
    }
    
    cout << first.strength << first.next->strength;
    
    return 0;
}*/


#include <iostream>
using namespace std;

#include <algorithm>

struct dragon{
    int strength;
    int bonus;
};

bool organize(const dragon& left, const dragon& right){
    return left.strength < right.strength;
}

int main(){
    int s,n;
    cin >> s >> n;
    dragon dragon[10000]; //Exceeds the limit?
    for(int i = 0; i < n ; i++) cin >> dragon[i].strength >> dragon[i].bonus;
    sort(dragon, dragon+n, organize);
    
    bool win = true;
    for(int i = 0; i < n && win == true; i++){
        if(s > dragon[i].strength) s += dragon[i].bonus;
        else win = false;
    }
    
    
    if(win == false) cout << "NO";
    else cout << "YES";
    
    return 0;
}