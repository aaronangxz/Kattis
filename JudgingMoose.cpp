#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int l,r;
    scanf("%d %d",&l,&r);
    if (l == r)
    {
        if (l == 0)
        {
            cout << "Not a moose " ; 
        }
        else
        {
            cout << "Even " << l + r ; 
        }
    }
    else
    {
        if (l > r)
        {
            cout << "Odd " << l * 2;
        }
        else
        {
            cout << "Odd " << r * 2;
        }
    }  
}