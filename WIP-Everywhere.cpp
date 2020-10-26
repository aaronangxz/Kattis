#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    int cases, trips, count;
    string name;
    vector<string> names;
    scanf("%d",&cases);

    for (int i = 0; i < cases; i++)
    {
        scanf("%d",&trips);
        count = trips;
        for (int j = 0; j < trips; j++)
        {
            cin >> name;
            names.push_back(name);

            for (int k = 0; k < names.size();k++)
            {
                string match = names[k];

                for (int l = k + 1; l < names.size(); l++)
                {
                    if (names[l] == match)
                    {
                        count--;
                        //cout << "Match: " << match << " with " << names[l] << endl;
                        names.erase(names.begin()+l);
                        continue;
                    }
                }
            }
        }
        cout << count << endl; 
        count = 0;
    }
}

//exceeded cpu time limit