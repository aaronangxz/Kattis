#include <iostream>

using namespace std;

int main(void)
{
    double n;
    long results;
    cin >> n;
    results = n  * 1000 * (5280/4854);
    cout << results;
}