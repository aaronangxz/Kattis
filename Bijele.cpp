#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int king,queen,rooks,bishops,knights,pawns;
    
    cin >> king >> queen >> rooks >> bishops >> knights >> pawns ;

    king = 1 - king;
    queen = 1 - queen;
    rooks = 2 - rooks;
    bishops = 2 - bishops;
    knights = 2 - knights;
    pawns = 8 - pawns;

    cout << king << " " << queen << " " << rooks << " " << bishops << " " << knights << " " << pawns;
}