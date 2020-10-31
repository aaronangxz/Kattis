#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int in1,in2,out1,out2;
    vector<int> p1;
    vector<int> p2;
    
    for (int i = 0; i < 3; i++)
    {
        cin >> in1 >> in2;
        p1.push_back(in1);
        p2.push_back(in2);
    }
    
    if (p1[0] != p1[1] && p1[0] != p1[2])
    {
        out1 = p1[0];
    }
    else if (p1[1] != p1[0] && p1[1] != p1[2])
    {
        out1 = p1[1];
    }
    else
    {
        out1 = p1[2];
    }
    
    if (p2[0] != p2[1] && p2[0] != p2[2])
    {
        out2 = p2[0];
    }
    else if (p2[1] != p2[0] && p2[1] != p2[2])
    {
        out2 = p2[1];
    }
    else
    {
        out2 = p2[2];
    }
    
    

    // for (int j = 0; j < 2; j++)
    // {
    //     if (p1[j] != p1[j+1])
    //     {
    //         out1 = p1[j];
    //     }
    //     else
    //     {
    //         p1.erase(p1.begin()+j);
    //         j--;
    //     }
        
    //     if (p2[j] != p2[j+1])
    //     {
    //         out2 = p2[j];
    //     }
    //     else
    //     {
    //         p2.erase(p2.begin()+j);
    //         j--;
    //     }
        
    // }
    
    cout << out1 << " " << out2;
    
    
}