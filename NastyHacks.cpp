#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n, r, e, c;
    int output[]={};
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d",&r,&e,&c);
        if (e - c > r)
        {
            cout << "advertise\n";
        }
        else if (e - c < r)
        {
            cout << "do not advertise\n";
        }
        else
        {
            cout << "does not matter\n";
        }
    }
}