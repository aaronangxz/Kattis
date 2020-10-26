#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int l,d,x,n,n_copy,m,m_copy;
    int sum = 0, power = 0;
    scanf("%d %d %d",&l,&d,&x);
    for (n = l; n <= d ; n++)
    {
        if (n < 10)
        {
            if (n == x)
            {
                n = n;
                cout << n;
                break;
            }
        }
        else if (n >= 10 && n <= 99)
        {
            sum = 0;
            sum = (n % 10) + (n / 10); 
            if (sum == x)
            {
                n = n;
                cout << n;
                break;
            }   
        }
        else if (n >= 100 && n <= 999)
        {
            n_copy = n;
            sum = 0;
            while (n_copy > 0)
            {
                sum += n_copy % 10;
                // cout << "sum is " << sum << endl;
                n_copy/=10;
                power ++;
            }
            if (sum == x)
            {
                n = n;
                cout << n;
                break;
            }  
        }
        else if (n >= 1000 && n <=9999)
        {
            n_copy = n;
            sum = 0;
            while (n_copy > 0)
            {
                sum += n_copy % 10;
                // cout << "sum is " << sum << endl;
                n_copy/=10;
                power ++;
            }
            if (sum == x)
            {
                n = n;
                cout << n;
                break;
            }  
        }
        else
        {
            n_copy = n;
            sum = 0;
            while (n_copy > 0)
            {
                sum += n_copy % 10;
                // cout << "sum is " << sum << endl;
                n_copy/=10;
                power ++;
            }
            if (sum == x)
            {
                n = n;
                cout << n;
                break;
            }  
        }
    }
    cout << endl;
    sum = 0;
    for (m = d; m >= l ; m--)
    {
        if (m < 10)
        {
            if (m == x)
            {
                m = m;
                cout << m;
                break;
            }
        }
        else if (m >= 10 && m <= 99)
        {
            sum = 0;
            sum = (m % 10) + (m / 10); 
            if (sum == x)
            {
                m = m;
                cout << m;
                break;
            }   
        }
        else if (m >= 100 && m <= 999)
        {
            m_copy = m;
            sum = 0;
            while (m_copy > 0)
            {
                sum += m_copy % 10;
                // cout << "sum is " << sum << endl;
                m_copy/=10;
                power ++;
            }
            if (sum == x)
            {
                m = m;
                cout << m;
                break;
            }  
        }
        else if (m >= 1000 && m <=9999)
        {
            m_copy = m;
            sum = 0;
            while (m_copy > 0)
            {
                sum += m_copy % 10;
                // cout << "sum is " << sum << endl;
                m_copy/=10;
                power ++;
            }
            if (sum == x)
            {
                m = m;
                cout << m;
                break;
            }  
        }
        else
        {
            m_copy = m;
            sum = 0;
            while (m_copy > 0)
            {
                sum += m_copy % 10;
                // cout << "sum is " << sum << endl;
                m_copy/=10;
                power ++;
            }
            if (sum == x)
            {
                m = m;
                cout << m;
                break;
            }  
        }
    }
}