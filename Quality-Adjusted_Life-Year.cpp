#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    double q,y,QALY = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        scanf("%lf %lf",&q,&y);
        QALY += (q * y);
    }
    cout << QALY << endl;
}