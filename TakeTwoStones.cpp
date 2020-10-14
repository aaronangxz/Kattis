#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n;
    scanf("%d",&n);
    if (n%2 == 0)
    {
        cout << "Bob";
    }
    else
    {
        cout << "Alice";
    }
}