#include <iostream>

using namespace std;

int main(void)
{
    int n, k, o, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> o;
            sum +=  o;
        }
        cout << sum - (k - 1) << endl;
        sum = 0;
    }
}