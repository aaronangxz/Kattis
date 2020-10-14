#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(void)
{
    int n, x;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        if (abs(x) %2 == 0)
        {
            cout << x << " is even" << endl;
        }
        else
        {
            cout << x << " is odd" << endl;
        }
    }
}