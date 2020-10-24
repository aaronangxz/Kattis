#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int x, y;
    scanf("%d",&x);
    scanf("%d",&y);
    if (x > 0 && y > 0)
    {
        cout << "1";
    }
    else if (x < 0 && y > 0)
    {
        cout << "2";
    }
    else if (x < 0 && y < 0)
    {
        cout << "3";
    }
    else
    {
        cout << "4";
    }
}