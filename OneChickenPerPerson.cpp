#include <iostream>

using namespace std;

int main(void)
{
    int n,m,chix;
    cin >> n >> m;
    chix = m - n;
    if (chix == -1)
    {
        cout << "Dr.Chaz needs " << -chix << " more piece of chicken!" << endl;
    }
    else if (chix == 1)
    {
        cout << "Dr.Chaz will have " << chix << " piece of chicken left over!" << endl;
    }
    else if (chix < -1)
    {
        cout << "Dr.Chaz needs " << -chix << " more piece of chicken!" << endl;
    }
    else
    {
        cout << "Dr.Chaz will have " << chix << " pieces of chicken left over!" << endl;
    }
}