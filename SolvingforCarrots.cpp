#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string name;
    int N,P;
    cin >> N >> P ;
    
    while (N != 0)
    {
        cin >> name ;
        N--;
    }
    
    cout << P ;
}