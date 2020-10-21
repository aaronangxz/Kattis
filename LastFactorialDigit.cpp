#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int t, n, digit = 1;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&n);
        for (int j = 1; j <= n; j++)
        {
            digit *= j;
        }
        cout << digit % 10 << endl;
        digit = 1;
    }
}