#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(void)
{
    int n, p, remainder;
    long sum = 0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&p);
        remainder = p % 10;
        p = p/10;
        sum += pow(p,remainder);
    }
    cout << sum ;
}