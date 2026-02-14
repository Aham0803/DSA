//      1
//     1 1
//    2   2
//   3     3
//    2   2
//     1 1
//      1
 

//  n = 7

#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int n = (m + 1) / 2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        if (i == 1)
        {
            cout << "1";
        }
        if (i != 1)
        {
            for (int j = 1; j <= 1; j++)
            {
                cout << i - 1;
            }
        }

        for (int j = 1; j <= 2 * i - 2; j++)
        {

            cout << " ";
        }
        if (i != 1)
        {
            for (int j = 1; j <= 1; j++)
            {
                cout << i - 1;
            }
        }
        cout << endl;
    }
    // lower

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        if (i == 1)
        {
            cout << "1";
        }
        if (i != 1)
        {
            for (int j = 1; j <= 1; j++)
            {
                cout << i - 1;
            }
        }

        for (int j = 1; j <= 2 * i - 2; j++)
        {

            cout << " ";
        }
        if (i != 1)
        {
            for (int j = 1; j <= 1; j++)
            {
                cout << i - 1;
            }
        }
        cout << endl;
    }
    return 0;
}
