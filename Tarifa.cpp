#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int x, n, p, bringforward = 0,total=0;
    scanf("%d",&x);
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&p);
        total += bringforward + p ;
        bringforward = x - p;
    }
    cout << total ;
}