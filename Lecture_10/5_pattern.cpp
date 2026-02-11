//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5  (n = 5)

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        // left
        for (int j = 1; j <= n - i; j++)
        {
            cout << "\t";
        }
        int num = i;
        for (int j = 1; j <= i; j++)
        {
            cout << num << "\t";
            num++;
        }
        // right
        for (int j = i - 1; j >= 1; j--)
        {
            cout << num << "\t";
            num++;
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "\t";
        }
        cout << endl;
    }
    return 0;
}