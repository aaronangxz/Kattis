#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int h,m;
    scanf("%d %d",&h,&m);
    if (m >= 45)
    {
        m -= 45;
        cout << h << " " << m;
    }
    else
    {
        m = 15 + m;
        h --;
        if (h < 0)
        {
            h = 23;
        }
        cout << h << " " << m;   
    }
}