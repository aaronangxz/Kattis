#include <iostream>
#include <string>
#include <vector>

using namespace std;



int main(void)
{
    int n;
    vector<string> name;

    scanf("%d",n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%s",name);
    }
    
    for (int j = 0; j < n; j++)
    {
        for (int k = 1; k < n; k++)
        {
            if (name[k].size() > name[k-1].size())
            {
                /* code */
            }
            
        }
        
        
    }
    
}