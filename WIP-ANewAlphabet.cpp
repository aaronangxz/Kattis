#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<string> table = {"@","8","(","|)","3","#","^","[-]","|","_|","|<","1","[]\\/[]","[]\\[]","0","|D","(,)","|Z","$","']['","|_|","\\/","\\/\\/","}{","`/","2"};
    vector<char> tab = {'@','8','(","|)','3','#','^','[-]','|","_|','|<',"1","[]\\/[]","[]\\[]","0","|D","(,)","|Z","$","']['","|_|","\\/","\\/\\/","}{","`/","2"};
    vector<string> out;
    string input;
    cin >> input;
    
    for (int i = 0; i < input.size(); i++)
    {
        if (isalpha(input[i]))
        {
            if (input[i] >= 'a' && input[i] <= 'z')
            {
                out.push_back(table[input[i]-97]);
            }
            else
            {
                out.push_back(table[input[i]-65]);
            }
        }
        else
        {
            out[i] = input[i];
        }
    }

    for (int i = 0; i < out.size(); i++)
    {
        cout << out[i];
    }
    
}