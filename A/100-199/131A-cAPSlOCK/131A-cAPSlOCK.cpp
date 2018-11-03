#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int i, Counter;
    string Input, Output;

    while( cin >> Input )
    {
        Output = "";
        Counter = 0;

        if( Input[0] >= 'A' && Input[0] <= 'Z' )
        {
            Output = Output + (char) ( Input[0] + 32 );
        }
        else
        {
            Output = Output + (char) ( Input[0] - 32 );
        }
        for(i=1; i<Input.length(); i++)
        {
            if( Input[i] >= 'A' && Input[i] <= 'Z' )
            {
                Output = Output + (char) ( Input[i] + 32 );
                Counter++;
            }
            else
            {
                Output = Output + (char) ( Input[i] - 32 );
            }
        }
        if( Counter == Input.length()-1 )
        {
            cout << Output << "\n";
        }
        else
        {
            cout << Input << "\n";
        }
    }
    return 0;
}