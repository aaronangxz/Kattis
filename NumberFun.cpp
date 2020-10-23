/*

Input
Each input file will start with a single integer 𝑁 (1≤𝑁≤10000) denoting the number of test cases. 
The following 𝑁 lines will contain sets of 3 numbers 𝑎,𝑏,𝑐 (1≤𝑎,𝑏,𝑐≤10000).

Output
For each test case, determine whether or not it is possible to produce the third number, 𝑐, 
using the first two numbers, 𝑎 and 𝑏, using addition, subtraction, multiplication, or division.

*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n;
    double a, b, c;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        if (a + b == c || a - b == c || b - a == c || a * b == c || a / b == c || b / a == c)
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
}