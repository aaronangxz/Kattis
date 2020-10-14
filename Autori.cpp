#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(void)
{
    string input;
    vector<string> output;
    //scanf("%s",input);
    cin >> input;
    getline(cin, input);
    stringstream input_num (input);
    output[0] = input[0];

    for (int i = 1; i < input.size() - 1; i++)
    {
        if (input[i - 1] == "-")
        {
            output.push_back(input[i]);
        }
    }

    for (int j = 0; j < output.size(); j++)
    {
        cout << output[j];
    }
    
    
}