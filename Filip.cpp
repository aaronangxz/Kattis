#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(void)
{
    int a, b, a_reverse = 0, b_reverse = 0;
    scanf("%d %d",&a,&b);

    for (int i = 0; i < 3; i++)
        {
            a_reverse += (a % 10) * pow(10,2-i);
            a/=10;
        }

    for (int i = 0; i < 3; i++)
        {
            b_reverse += (b % 10) * pow(10,2-i);
            b/=10;
        } 

    if (a_reverse > b_reverse)
    {
        cout << a_reverse;   
    }
    else
    {
        cout << b_reverse;   
    }
}