// //    1 - - - - - 1
// //    1 2 - - - 2 1
// //    1 2 3 - 3 2 1
// //    1 2 3 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {

        // 1. increasing numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        // 2. dashes (skip in last row)
        int dash = 2 * (n - i);
        for (int k = 1; k <= dash - 1; k++)
        {
            cout << "- ";
        }

        // 3. decreasing numbers
        for (int j = i; j >= 1; j--)
        {
            if (i == n && j == i)
                continue; // avoid duplicate middle
            cout << j << " ";
        }

        cout << endl;
    }
}