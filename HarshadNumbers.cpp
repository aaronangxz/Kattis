#include <iostream>

using namespace std;

int findSum (int number)
{
    int sum = 0;
    int n = number;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(void)
{
    int n, number;
    cin >> n;
    bool isHarshad = false;

    while (isHarshad == false)
    {
        if ( n % findSum(n) == 0)
        {
            isHarshad = true;
            cout << n;
            break;
        }
        n ++;
    }
}