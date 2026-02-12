//                   0
//                 9 0 9
//               8 9 0 9 8
//             7 8 9 0 9 8 7
//           6 7 8 9 0 9 8 7 6
//         5 6 7 8 9 0 9 8 7 6 5
//       4 5 6 7 8 9 0 9 8 7 6 5 4
//     3 4 5 6 7 8 9 0 9 8 7 6 5 4 3
//   2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2
// 1 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 1

//  n = 10

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int s = 1; s <= n - i; s++)
            cout << "  ";

        int start = n - i;

        // increasing till 9
        for (int j = start; j <= 9; j++)
            cout << j << " ";

        // decreasing from 8 to start
        for (int j = 8; j >= start; j--)
            cout << j << " ";

        cout << endl;
    }
}