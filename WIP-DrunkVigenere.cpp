#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    string msg, key, moved;
    vector <string> newstr;
    cin >> msg;
    cin >> key;

    for (int i = 0; i < key.size(); i++)
    {
        moved = msg[i] + (key[i] - 65);
        //Pending wrap around
        newstr.push_back(moved);
    }
    
    for (int j = 0; j < newstr.size(); j++)
    {
        cout << newstr[j];
    }
    
}