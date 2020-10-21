#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    char month[10];
    string arr[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    int date;
    scanf("%s %d",month,&date);
    
    for (int i = 0; i < 12; i++)
    {
        if (month == arr[9] && date == 31)
        {
            cout << "yup";
            return 0;
        }
        else if (month == arr[11] && date == 25)
        {
            cout << "yup";
            return 0;
        }
        else
        {
            cout << "nope";
            return 0;
        }
    }
}