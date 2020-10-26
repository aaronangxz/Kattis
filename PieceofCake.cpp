#include <iostream>
using namespace std;

int main(void)
{
    int n, h, v;
    scanf("%d %d %d",&n,&h,&v);
    if (n - h > h)
    {
        h = n - h;
    }
    if (n - v > v)
    {
        v = n - v;
    }
    cout << h * v * 4;
}