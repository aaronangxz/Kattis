#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n, points = 0;
    char b;
    char card[3];
    scanf("%d %c",&n,&b);
    for (int i = 0; i < n * 4; i++)
    {
        scanf("%s",card);
        for (int j = 1; j >= 0; j--)
        {
            if (card[j] == b)
            {
                if (card[j-1] == 'J')
                {
                    points += 20;
                }
                else if (card[j-1] == '9')
                {
                    points += 14;
                }
                else if (card[j - 1] == 'A')
                {
                    points += 11;
                }
                else if (card[j - 1] == 'K')
                {
                    points += 4;
                }
                else if (card[j - 1] == 'Q')
                {
                    points += 3;
                }
                else if (card[j - 1] == 'T')
                {
                    points += 10;
                }
                else if (card[j - 1] == '8')
                {
                    points += 0;
                }
                else if (card[j - 1] == '7')
                {
                    points += 0;
                }
            }
            else
            {
                if (card[j - 1] == 'A')
                {
                    points += 11;
                }
                else if (card[j - 1] == 'K')
                {
                    points += 4;
                }
                else if (card[j - 1] == 'Q')
                {
                    points += 3;
                }
                else if (card[j - 1] == 'J')
                {
                    points += 2;
                }
                else if (card[j - 1] == 'T')
                {
                    points += 10;
                }
                else if (card[j - 1] == '9')
                {
                    points += 0;
                }
                else if (card[j - 1] == '8')
                {
                    points += 0;
                }
                else if (card[j - 1] == '7')
                {
                    points += 0;
                }
            }
        }
    }
    cout << points;
}