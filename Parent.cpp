#include <iostream>

using namespace std;

int main(void)
{
    string y, p;
    cin >> y;
    cin >> p;

    if (y[y.size() - 1] == 'e')
    {
        cout << y + "x" + p << endl;
    }
    else if (y[y.size() - 1] == 'a' || y[y.size() - 1] == 'i' || y[y.size() - 1] == 'o' || y[y.size() - 1] == 'u')
    {
        for (int i = 0; i < y.size() - 1; i++)
        {
            cout << y[i];
        }
        cout << "ex" + p << endl;
    }
    else if (y[y.size() - 1] == 'x' && y[y.size() - 2] == 'e')
    {
        cout << y + p << endl;
    }
    
    else
    {
        cout << y + "ex" + p << endl;
    }
}