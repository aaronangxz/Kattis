/*
Input
The input consists of:
one line with a string consisting of at least 1 and at most 100000 characters.
A preprocessing step has already transformed all whitespace characters to underscores (_), 
and the line will consist solely of characters with ASCII codes between 33 and 126 (inclusive).

Output
Output four lines, containing the ratios of whitespace characters, lowercase letters, uppercase letters, and symbols (in that order). 
Your answer should have an absolute or relative error of at most 10−6.
*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    char input[100000];
    double space = 0,lower = 0,upper = 0,sym = 0;
    int len;
    scanf("%s",input);
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == 95)
        {
            space ++;
        }
        else if ( 97 <= input[i] && input[i] <= 122 )
        {
            lower ++;
        }
        else if ( 65 <= input[i] && input[i] <= 90 )
        {
            upper++;
        }
        else
        {
            sym++;
        }
        len = i;
    }

    space = space / (len + 1);
    lower = lower / (len + 1);
    upper = upper / (len + 1);
    sym = sym / (len + 1);

    cout << space << endl;
    cout << lower << endl;
    cout << upper << endl;
    cout << sym << endl;
}