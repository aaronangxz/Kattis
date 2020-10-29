#include <iostream>
#include <math.h>
#include <stdlib.h> 
#include <vector>
using namespace std;

int main(void)
{
    // long long int a, b, out;
    // cin >> a; 
    // cin.ignore();
    // cin >> b;
    // out = llabs(a - b);

    // cout << out;

    
    vector<int> a;
    vector<int> b;
    vector<int> out;
    string a_str, b_str;
    int output;
    cin >> a_str >> b_str;
    cout << "Input: " << a_str << ", " << b_str << endl;

    for (int i = 0; i < a_str.size(); i++)
    {
        switch (a_str[i])
        {
        case '0':
            a.push_back(0);
            cout << "OK " << i << endl;
            break;
        case '1':
            a.push_back(1);
            cout << "OK " << i << endl;
            break;
        case '2':
            a.push_back(2);
            cout << "OK " << i << endl;
            break;
        case '3':
            a.push_back(3);
            cout << "OK " << i << endl;
            break;
        case '4':
            a.push_back(4);
            cout << "OK " << i << endl;
            break;
        case '5':
            a.push_back(5);
            cout << "OK " << i << endl;
            break;
        case '6':
            a.push_back(6);
            cout << "OK " << i << endl;
            break;
        case '7':
            a.push_back(7);
            cout << "OK " << i << endl;
            break;
        case '8':
            a.push_back(8);
            cout << "OK " << i << endl;
            break;
        case '9':
            a.push_back(9);
            cout << "OK " << i << endl;
            break;
        default:
            cout << "Not oK " << i << endl;
            break;
        }
    }

    for (int i = 0; i < b_str.size(); i++)
    {
        switch (b_str[i])
        {
        case '0':
            b.push_back(0);
            break;
        case '1':
            b.push_back(1);
            break;
        case '2':
            b.push_back(2);
            break;
        case '3':
            b.push_back(3);
            break;
        case '4':
            b.push_back(4);
            break;
        case '5':
            b.push_back(5);
            break;
        case '6':
            b.push_back(6);
            break;
        case '7':
            b.push_back(7);
            break;
        case '8':
            b.push_back(8);
            break;
        case '9':
            b.push_back(9);
            break;
        default:
            break;
        }
    }

    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }
    // for (int i = 0; i < b.size(); i++)
    // {
    //     cout << b[i] << " ";
    // }

    
    if (a.size() >= b.size())
    {
        for (int i = 0; i < a.size(); i++)
        {
            
        output = abs(a[i] - b[i]);
        out.push_back(output);
        }
    }
    else
    {
        for (int i = 0; i < b.size(); i++)
        {
            if (a[i] == NULL )
            {
                a[i] = 0;
                i--;
            }
            else if (b[i] == '\0')
            {
                b[i] = 0;
                i--;
            }
        output = abs(a[i] - b[i]);
        out.push_back(output);
        }
    }
    
    
    
    
    


    for (int i = 0; i < out.size(); i++)
    {
        cout << out[i] << " ";
    }
    
}