#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> total;
    int p1,p2,p3,p4,sum,contestant = 1;
    
    for (int i = 1; i <= 5; i++)
    {
        cin >> p1 >> p2 >> p3 >> p4;
        sum = p1 + p2 + p3 + p4;
        total.push_back(sum);
    }
    
    int max = total[0];

    for (int j = 0; j < total.size() ; j++)
    {
        if (total[j] > max)
        {
            max = total[j];
            contestant = j + 1;
        }
    }
    cout << contestant << " " << max;
}