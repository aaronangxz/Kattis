#include <iostream>
#include <string>

using namespace std;

void swap(int *a,int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main (void)
{
    int in1, in2, in3, A, B, C, tmp;
    int arr[3];
    string alph;
    cin >> in1 >> in2 >> in3;

    //Assign 3 inputs to array
    arr[0] = in1;
    arr[1] = in2;
    arr[2] = in3;

    cout << "Arr is " << arr[0] << " " << arr[1] << " " << arr[2] << endl; 

    //Sawp if number in front is bigger
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            if (arr[j-1] > arr[j])
            {
               swap(arr[j-1],arr[j]);
            }
        }
    }
    
    //Assign A,B,C to arranged numbers
    A = arr[0];
    B = arr[1];
    C = arr[2];

    cout << "ABC is " << A << " " << B << " " << C << endl; 
    
    //Take A,B,C arrangements
    cin >> alph;

    cout << "Alph is " << alph << endl;

    //Print accordingly
    for (int k = 0; alph[k] != '\0'; k++)
    {
        if (k != 0 && k != 3)
        {
            cout << " " ;
        }
        if (alph[k] == 'A')
        {
            cout << A;
        }
        else if (alph[k] == 'B')
        {
            cout << B;
        }
        else if (alph[k] == 'C')
        {
            cout << C;
        }
    }
}