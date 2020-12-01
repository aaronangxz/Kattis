#include <iostream>

using namespace std;

int main(void)
{
    int n;
    string input1, input2, output;
    cin >> n;
    for (int  i = 0; i < n; i++)
    {
        cin >> input1;
        cin >> input2;
        for (int j = 0; j < input1.size(); j++)
        {
            if(input1[j] == input2[j]) 
            {
                output += ".";
            }
            else 
            {
                output += "*";
            }
        }
        cout << input1 << endl << input2 << endl << output << endl << endl;
        output = "\0";
    }
}