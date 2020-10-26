#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    int p, k, n, i , j, candles = 0;
    vector<int> sum;
    scanf("%d",&p);

    for (i = 1; i <= p; i++)
    {
        scanf("%d %d",&k,&n);
        for (j = 1; j <= n; j++)
        {
            candles += j + 1;
        }
        cout << k << " " << candles << endl;
        candles = 0;
    }
}