#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main (void)
{
    int n;
    string input;
    vector<string> sentence;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        cin.ignore(); //clear cin buffer
        getline(cin,input);
        cout << "input is " << input;

        for (int j = 0; input[j] != '\0'; j++)
        {
            sentence.push_back(input[j]);
        }
                
        for (int k = 0; k < sentence.size(); k++)
        {
            cout << "Vector: " << sentence[k] << endl;
        }
        
        //Need to put space separated words into vector

        // if (input[0] == 'Simon' && input[1] == "says")
        // {
        //     /* code */
        // }
        
    }
    
}

