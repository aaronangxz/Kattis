/*
Task
Your task will be to write a program for reversing numbers in binary. 
For instance, the binary representation of 13 is 1101, and reversing it gives 1011, which corresponds to number 11.

Input
The input contains a single line with an integer 𝑁, 1 ≤ 𝑁 ≤ 1000000000.

Output
Output one line with one integer, the number we get by reversing the binary representation of 𝑁.

*Note to self: To compile:* (due to vector)
$ g++ -std=c++11 ReversedBinaryNumber.cpp
$ ./a.out
*/

#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

int main(void)
{
    int input,int_rev = 0,remainder;

    //Initialize empty vector
    vector<int> num = {};

    //Input
    cin >> input ;

    //Convert input to binary + reverse 
    for ( int i = 0; input > 0 ; i++)
    {
        remainder = input % 2;
        num.push_back(remainder);
        input /= 2;
    }
    
    //Convert reversed to int
    for (int l = 0; l <= num.size() - 1; l++)
    {
        int_rev += num[l] * pow(2,(num.size() - 1 - l));
    }
    //Output
    cout << int_rev << endl;
}