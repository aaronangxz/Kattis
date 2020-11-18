#include <iostream>

using namespace std;

int main(void)
{
    string in;
    int count = 0;
    cin >> in;

    for (int i = 0; i < in.size(); i++)
    {
        if (in[i] == 'e')
        {
            count++;
        }
    }

    cout << "h";
    for (int j = 0; j < count * 2; j++)
    {
        cout << "e";
    }
    cout << "y";
    
}