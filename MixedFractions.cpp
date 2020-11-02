#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    while(cin >> a >> b) {
        if(a == 0 && b == 0) 
        {
            return 0;
        }
        cout << a / b << " " << a % b << " / " << b << endl;
    }
}