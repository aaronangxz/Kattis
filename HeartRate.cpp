#include <iostream>
using namespace std;

int main(void)
{
    int n, b;
    double p, min_abpm, bpm, max_abpm;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %lf",&b,&p);
        bpm = (60*b)/ p;
        min_abpm = bpm - ((15/p) * 4);
        max_abpm = bpm + ((15/p) * 4);
        cout << min_abpm << " " << bpm << " " << max_abpm << endl;
    }
}