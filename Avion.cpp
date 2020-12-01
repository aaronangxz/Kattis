#include <iostream>

using namespace std;

bool check (string input)
{
    bool isCIA = false;
    for (int i = 0; i < input.size(); i++)
    {
        if (i >= 2 && input[i] == 'I')
        {
            if (input[i-1] == 'B' && input[i-2] == 'F')
            {
                return true;
            }
        }
    }
    return false;
}

int main (void)
{
    string input;
    string count;
    for (int i = 1; i < 6; i++)
    {
        cin >> input;
        if (check(input))
        {
            count += to_string(i);
            count += " ";
            //cout << "Count added: " << count << endl;
        }      
    }
    
    if (count == "\0")
    {
        cout << "HE GOT AWAY!";
    }
    else
    {
        cout << count;
    }
}