#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string Jon;
    string Doc;
    cin >> Jon;
    cin.ignore();
    cin >> Doc;

    if (Jon.size() >= Doc.size())
    {
        cout << "go" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}