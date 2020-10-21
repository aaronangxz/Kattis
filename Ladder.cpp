#include <iostream>
#include <string>
#include <math.h>
#define PI 3.14159265

using namespace std;

int main(void)
{
    int h, v, min;
    scanf("%d %d",&h,&v);
    min = ceil(h / sin(v * PI / 180)); // Convert Rad to Deg
    cout << min;
}