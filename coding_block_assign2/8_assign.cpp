// 0
// 1       1
// 2       3       5
// 8       13      21      34
// 55      89      144     233     377

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int prev = 0;
    int curr = 1;
    int next;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << prev << "\t";
            next = prev + curr;
            prev = curr;
            curr = next;
        }
        cout << endl;
    }
    return 0;
}