#include <iostream>
using namespace std;
int kthFactor(int n, int k)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (cnt == k)
            {
                cout << i;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    kthFactor(n, k);
    return 0;
}
