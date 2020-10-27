#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    string in;
    
    //not usable for 10^100
    // double cost; 
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int digits = 0;
    //     cin >> cost;
    //     if (cost == 0)
    //     {
    //         digits ++;
    //     }
    //     while (cost > 0)
    //     {
    //         cost /= 10;
    //         digits ++;
    //     }
    //     cout << digits << endl;
    // }

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        cout << in.size() << endl;
    }
}