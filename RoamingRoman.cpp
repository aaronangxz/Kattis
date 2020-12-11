#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    double n;
    int results;
    cin >> n;
    results = round(n * 1000 * 5280 / 4854);
    cout << results;
}