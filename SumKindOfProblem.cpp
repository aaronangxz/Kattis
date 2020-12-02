#include <iostream>

using namespace std;

int s1 (int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int s2 (int n)
{
    int sum = 0, number = 1;
    while (n > 0)
    {
        sum += number;
        n--;
        number += 2;
    }
    return sum;
}

int s3 (int n)
{
    int sum = 0, number = 2;
    while (n > 0)
    {
        sum += number;
        n--;
        number += 2;
    }
    return sum;
}

int main(void)
{
    int num;
    int k, n;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> k;
        cin >> n; 
        cout << k << " " << s1(n) << " " << s2(n) << " " << s3(n) << endl;
    }
}