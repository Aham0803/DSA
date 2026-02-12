//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
// n = 5

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        int cnt = 0;
        for (int j = 1; j <= i; j++)
        {
            cnt = cnt + 1;
            cout << cnt << " ";
        }

        for (int j = i - 1; j >= 1; j--)
        {
            cnt = cnt - 1;
            cout << cnt << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }
    return 0;
}