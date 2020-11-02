#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    string input;
    vector<char> line;
    vector<char>::iterator it;
    cin >> input;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '<')
        {
            line.erase(line.begin() + i - 1);
            cout << "skip " << input[i] << endl;
        }
        else 
        {
            line.push_back(input[i]);
            cout << "added " << input[i] << endl;
        }    

        for (int k = 0; k < line.size(); k++)
        {
            cout << line[k];
        }
    }
    // for (int j = 0; j < line.size(); j++)
    // {
    //     if (line[j] == '<')
    //     {
    //         line.erase(line.begin()+ j);
    //         line.erase(line.begin()+ j - 1);
    //         j-=2;
    //     }
    // }
    
}

//Time limit exceeded