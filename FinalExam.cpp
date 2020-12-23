#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    string in;
    vector <string> correct;
    vector <string> hanh;
    int count = 0;

    //Input number of questions
    cin >> n;
    //Loop n times to input correct answers
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        //Add correct answers into vector
        correct.push_back(in);
        //Reset the current answer before prompting fo next question
        in.clear();
    }
    
    //Duplicate correct answers to hanh's answers
    hanh = correct;

    //Loop n times
    for (int j = 0; j < n; j++)
    {
        //If the current answer matches hanh's next answer
        if (correct[j] == hanh[j+1])
        {
            //He got it correct
            count ++;
        }
    }
    cout << count ;   
}