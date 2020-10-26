#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(void)
{
    char input[100];
    scanf("%s",input);
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] >= 65 && input[i] <= 90)
        {
            cout << input[i];
        }
    }
}