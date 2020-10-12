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
        cout << i << " ";
        scanf("%d",&n);
        for (j = 1; j <= n; j++)
        {
            candles += j + 1;
        }
        sum.push_back(candles);
        //cout << i << " " << candles << endl;
        candles = 0;
    }

    for (int k = 0; k < sum.size() ; k++)
    {
        cout << k + 1 << " " << sum[k] << endl;
    }
    
}