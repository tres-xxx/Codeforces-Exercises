#include<iostream>
using namespace std;
char str1[1000], str2[1000];
int letters[256] = { 0 };
int main()
{
    cin.getline(str1, 1000);
     cin.getline(str2, 1000);
     int i;
     for (i = 0; str1[i] != 0; i++)
        letters[str1[i]]++;
     for (i = 0; str2[i] != 0; i++)
     {
         if (str2[i] != ' ')
         {
             letters[str2[i]]--;
             if (letters[str2[i]] < 0)
             {
                 printf("NO");
                 return 0;
             }
         }
     }
     printf("YES");
     return 0;
}