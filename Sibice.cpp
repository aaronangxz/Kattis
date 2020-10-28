#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int n, w, h, l;
    double diagonal;
    cin >> n >> w >> h;

    diagonal = sqrt(w * w + h * h);

    for (int i = 0; i < n; i++)
    {
        cin >> l;
        if (l <= w || l <= h || l <= diagonal)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NE" << endl;
        }
    }
}