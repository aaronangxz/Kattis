#include <iostream>

using namespace std;

int main (void)
{
    int n, num;
    double slug = 0;
    int base = 0;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num);
        if (num >= 0)
        {
            slug += num;
            base ++;
        }
    }
    slug = slug / base;
    cout << slug << endl;
}