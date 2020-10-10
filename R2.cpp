/*
The number 𝑆 is called the mean of two numbers 𝑅1 and 𝑅2 if 𝑆 is equal to (𝑅1+𝑅2)/2. 
Mirko’s birthday present for Slavko was two integers 𝑅1 and 𝑅2. 
Slavko promptly calculated their mean which also happened to be an integer but then lost 𝑅2! Help Slavko restore 𝑅2.

Input
The first and only line of input contains two integers 𝑅1 and 𝑆, both between −1000 and 1000.

Output
Output 𝑅2 on a single line.
*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int R1, R2, S;
    scanf("%d %d",&R1,&S);
    R2 = (S * 2) - R1;
    cout << R2 ;
}