#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    char in[300];
    int days = 0;
    scanf("%s",in);

    for (int i = 0; in[i] != '\0'; i++)
    {
        if (i % 3 == 0)
        {
            if (in[i] != 'P')
            {
                days ++;
            }
        }
        else if ((i - 1) % 3 == 0)
        {
        if (in[i] != 'E')
            {
                days ++;
            }
        }
        else if ((i - 2) % 3 == 0)
        {
            if (in[i] != 'R')
            {
                days ++;
            }
        }
    }

    cout << days;

}