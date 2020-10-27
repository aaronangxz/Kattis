#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> total;
    int p1,p2,p3,p4,sum,max,contestant,temp;
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d %d %d %d",&p1,&p2,&p3,&p4);
        sum = p1 + p2 + p3 + p4;
        total.push_back(sum);
    }

    for (int j = 0; j < total.size(); j++)
    {
        for (int k = 1; k < total.size(); k++)
        {
            if (total[k] < total[j])
            {
                temp = total[k];
                total[k] = total[j];
                total[j] = temp;
            }
        }
    }
    cout << contestant << " " << total[0];
}

//sort sum