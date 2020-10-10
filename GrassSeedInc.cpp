/*
Input
One line containing a real number 𝐶 (0<𝐶≤100), the cost of seed to sow one square metre of lawn.

One line containing an integer 𝐿 (0<𝐿≤100), the number of lawns to sow.

𝐿 lines, each containing two positive real numbers: 𝑤𝑖 (0≤𝑤𝑖≤100), the width of the lawn, and 𝑙𝑖 (0≤𝑙𝑖≤100), the length of the lawn.

All real numbers are given with at most 8 decimals after the decimal point.

Output
One line containing a real number: the cost to sow all of the lawns.

All output must be accurate to an absolute or relative error of at most 10−6.
*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    double cost, width, length, total = 0;
    int lawns;

    scanf("%lf",&cost);
    scanf("%d",&lawns);

    for (int i = 0; i < lawns; i++)
    {
        scanf("%lf %lf",&width,&length);
        total += (width * length) * cost;
    }
    
    printf("%lf",total);
}