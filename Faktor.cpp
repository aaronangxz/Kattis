#include <iostream>
#include <string>
#include <math.h>
#include <limits.h>

using namespace std;

int main(void)
{
    int A,I;
    scanf("%d %d",&A,&I);
    for (int i = 0; i < (INT_MAX); i++)
    {
        if (I == ceil((i)/double(A)))
        {
            cout << i ;
            break;
        }    
    }
}