#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> guest;
    int n, g, check;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&g);
        guest.push_back(g);
    }
    
    for (int j = 0; j < guest.size(); j++)
    {
        check = guest[j];
        
        for (int k = 1; k < guest.size(); k++)
        {
            if (check != guest[k])
            {
                /* code */
            }
            
        }
        
        
    }
    
}