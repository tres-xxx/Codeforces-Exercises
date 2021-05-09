#include<cstdio>
using namespace std;
char tab[4];  // string for inputs like x++.
int t,x =0;

int main()
{
 scanf("%d\n",&t);
 while(t--)
 {
     gets(tab);
     if(tab[0]=='+'|| tab[1]=='+')
        x +=1;
     else
        x -=1;
 }
   printf("%d",x);
   return 0;
}
