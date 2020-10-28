#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int main(void)
{
    vector<int> mods;
    int num, mod, deduct = 0;
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d",&num);
        mod = num % 42;
        mods.push_back(mod);   
        for (int j = 0; j <mods.size() - 1 ; j++)
        {
            if (mod == mods[j])
            {
                deduct ++;
                // cout << "deduct " << deduct << endl;
            }
        }  
    }

    if (deduct >= mods.size())
        {
            cout << "1" << endl;
        }
    else
    {
        cout << mods.size() - deduct << endl;
    }

    // for (int j = 0; j < mods.size() - 1; j++)
    // {
    //     for (int k = 1; k < mods.size() - 2; k++)
    //     {
    //         if (mods[j] == mods[k])
    //         {
    //             deduct --;
    //             cout << "deduct " << deduct << endl;
    //         }
    //     }
    // }
    
}