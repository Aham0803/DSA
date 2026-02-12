// * * * * * * *
// * * *   * * *
// * *       * *
// *           *
// * *       * *
// * * *   * * *
// * * * * * * *

// n = 7

#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int n = (m + 1) / 2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = i - 2; j >= 1; j--)
        {
            cout << "  ";
        }
        if (i == 1)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << "* ";
            }
        }
       
        cout << endl;
    }
    // lower
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = i - 2; j >= 1; j--)
        {
            cout << "  ";
        }
        if (i == 1)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << "* ";
            }
        }
        
        cout << endl;
    }
    return 0;
}
