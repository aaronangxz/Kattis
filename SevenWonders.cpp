#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(void)
{
    char input[50];
    int T = 0,G = 0,C = 0, points = 0;
    
    scanf("%s",input);
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == 'T')
        {
            T++;
        }
        else if (input[i] == 'C')
        {
            C++;
        }
        else if (input[i] == 'G')
        {
            G++;
        }
    }

    points = pow(T,2) + pow(C,2) + pow(G,2);

    while (T > 0 && C > 0 && G > 0)
    {
       T--;
       C--;
       G--;
       points += 7;
    }

    cout << points;
}