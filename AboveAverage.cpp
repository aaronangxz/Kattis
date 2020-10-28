#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(void)
{
    int c, n, grade, aboveAvg = 0;
    double avg, total = 0, percentage;
    vector<int> grades;

    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> n;
        total = 0;
        aboveAvg = 0;
        grades.clear();

        for (int j = 0; j < n; j++)
        {
            cin >> grade;
            grades.push_back(grade);
            total += grade;
            //cout << "Total now is " << total << endl;
        }
        
        avg = total / n;
        
        //cout << "Avg is " << avg << endl;

        for (int k = 0; k < grades.size(); k++)
        {
            if (grades[k] > avg)
            {
                aboveAvg ++;
                //cout << "above avg count: " << aboveAvg << endl;
            }
        }
        
        percentage = (double(aboveAvg) / n) * 100;
        
        //rounded to 3 decimal places
        cout << fixed << setprecision(3) << percentage << "%" << endl;
    }   
    
}