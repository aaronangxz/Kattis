#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int startTime,classTime,routes,walk,ride,bus,total = 0;
    vector<int> walkTime;
    vector<int> rideTime;
    vector<int> busTime;
    scanf("%d %d %d",&startTime,&classTime,&routes);

    //Time to walk between stops
    for (int i = 0; i < routes + 1; i++)
    {
        scanf("%d",&walk);
        walkTime.push_back(walk);
    }

    //Time on bus
    for (int j = 0; j < routes; j++)
    {
        scanf("%d",&ride);
        rideTime.push_back(ride);
    }

    //Bus arrival interval
    for (int k = 0; k < routes; k++)
    {
        scanf("%d",&bus);
        busTime.push_back(bus);
    }
    
    for (int l = 0; l < routes; l++)
    {
        total = startTime;
        total += walkTime[l];
        total += busTime[l] - total;
        total += rideTime[l];
        total += walkTime[l];
    }
    
    if (total > classTime)
    {
        cout << "no";
    }
    else cout << "yes";
}

/*

came out at 
0
walk to bus stop 
0 + 2 = 2
bus comes in 3, wait for 1 min 
2 + 1 = 3
ride bus 5
3 + 5 = 8
walk to bus stop 2
8 + 2 = 10
bus come in 0, wait for 0 min
10
ride bus 5
15
walk to class 2
17

ON TIME


came out at 
0
walk to bus stop //track time
0 + 3 = 3
bus comes in 8, wait for 5 min //Compare current time & interval
3 + 5 = 8
ride bus 1 //track time
8 + 1 = 9
walk to bus stop 3 //track time
9 + 3 = 12

LATE


*/