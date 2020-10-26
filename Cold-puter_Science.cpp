#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;


int main(void)
{
    int temp, count = 0;
    int n;
	// getline(cin, num);
    // stringstream input_num (num);

    vector<int> input;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&temp);
        input.push_back(temp);
    }
    
    for (int j = 0; j < input.size(); j++)
    {
        if (input[j] < 0)
        {
            count++;
        }
    }
    cout << count;
}