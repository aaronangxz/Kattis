#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n, input;
    vector<int> in;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        in.push_back(input);
    }
    for (int j = in.size() - 1; j >= 0; j--)
    {
        cout << in[j] << endl;
    }
}