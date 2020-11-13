#include <iostream>

using namespace std;

int main(void)
{
    int n;
    string in;
    int tries = 0;
    int guess = 500;
    int hi, low;
    while (tries != 10)
    {
        cout << guess << endl;
        cin >> in;
        if (in == "lower")
        {
            cout << guess / 2;
            hi = rand() % 500 + 1; 
        }
        else if (in == "higher")
        {
            cout << ;
            low = 500 + rand() % 500 + 1;
        }
        else if (in == "correct")
        {
            /* code */
        }
        tries ++;
    }
    
} 

rand() % 1000 + 1; 