#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int n , m, out ;
    scanf("%d %d",&n,&m);
    if (n == m)
    {
        cout << n + 1;
    }
    else if (n > m)
    {
        for (int out = m+ 1; out <= n + 1; out++)
        {
            cout << out << endl;
        }
    }
    else if (n < m)
    {
        for (int out = n + 1; out <= m + 1; out++)
        {
            cout << out << endl;
        }
    }
}