//solution based on the code posted in www.voidcn.com/article/p-hyfsrola-bgt.html
#include <string.h>
#include <iostream>
using namespace std;

int main(){
    /*My own solution, as usual, does not work, what a great programmer!, hurray!
    int n,t,rest = 0;
    bool g,c;
    g = false;
    c = false;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        switch(t){
            case 0: g=false;c=false; rest++; break;
            case 1:
                if(c){
                    rest++; c=false;
                }
                else{ c = true;}
                g = false;
                break;
            case 2:
                if(g){
                    rest++; g=false;
                }
                else{ g = true;}
                c = false;
                break;
            case 3:
                if(c && g){
                    rest++; c=false; g=false;
                }
                else{
                    if(c){
                        g=true; c=false;
                    }
                    else{
                        if(g){
                            c=true;g=false;
                        }
                        else{
                            c=g=true;
                        }
                    }
                }
                break;
            default: cout << "error"; return 0;
        }
    }
    cout << rest << endl;*/
    int n;
    cin >> n;
    int a[n+2],num;
    memset(a,0,sizeof(a)); //fill with zeros the array
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        int p = i-1;
        if(a[i] == 3 && a[p] == 0)
            continue;
        else{
            if((a[i] == 1 && a[p] == 1) || (a[i] == 2 && a[p] == 2)) a[i] = 0;
            else{
                if(a[i] == 3){
                    if(a[p] == 1){ a[i] = 2;}
                    if(a[p] == 2){ a[i] = 1;}
                }
            }
        }
    }
    num = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 0) num++;
    }
    cout << num << endl;
    return 0;
}
