#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = (n + 1) / 2;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}