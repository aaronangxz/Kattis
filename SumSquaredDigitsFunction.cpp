#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int p, k;
    int b, n, sum = 0;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        sum = 0;
        cin >> k;
        cin >> b;
        cin >> n;
        while (n > 0)
        {
            sum += pow((n % b),2);
            n /= b;
        }
        cout << k << " " << sum << endl;
    }   
}