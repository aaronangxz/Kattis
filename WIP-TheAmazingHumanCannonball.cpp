#include <iostream>
#include <math.h>
#define G 9.81;
#define PI 3.14159265

using namespace std;

int main(void)
{
    int n;
    double x,y,time,velocity,angle,dist,lowerHeight, upperHeight, centre;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        cin >> velocity >> angle >> dist >> lowerHeight >> upperHeight;
        time = dist / velocity;

        x = velocity * time * cos(angle * PI / 180);
        cout << "Cos is: " << cos(angle * PI / 180) << endl;
        
        y = (velocity * time * sin(angle * PI / 180)) - (((time * time) * 9.81)* 0.5);
        cout << "Sin is: " << sin(angle * PI / 180) << endl;

        cout << "Time is " << time << endl;
        cout << "X is " << x << endl;
        cout << "Y is " << y << endl;

        //centre = (upperHeight - lowerHeight) / 2;
        //cout << "Centre is " << centre << endl;
        cout << "Margin is " << lowerHeight + 1 << ", " << upperHeight - 1 << endl;
        if (x >= dist && y - 1 >= lowerHeight  && y + 1 <= upperHeight)
        {
            cout << "Safe" << endl;
        }
        else cout << "Not Safe" << endl;
    }
    
}

//Calculation error? always get Not safe