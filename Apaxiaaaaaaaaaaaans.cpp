#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    string input;
    vector<char> name;
    cin >> input;
    for (int i = 0; i < input.size(); i++)
    {
        name.push_back(input[i]);
    }
    for (int j = 0; j < name.size() - 1; j++)
    {
        if (name[j] == name[j+1])
        {
            name.erase(name.begin() + j);
            j--;
        }
    }
    for (int k = 0; k < name.size(); k++)
    {
        cout << name[k] ;
    }
}