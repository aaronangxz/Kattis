#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n, s, elapsed = 0, accumulate = 0, dist = 0;
    
    while(true)
    {
        scanf("%d",&n);
        if (n == -1)
        {
            return 0;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                scanf("%d %d",&s,&elapsed);
                dist += s * (elapsed - accumulate);
                accumulate += (elapsed - accumulate);
            }
            cout << dist << " miles" << endl;
            dist = 0;
            accumulate = 0;    
        }
    }
}