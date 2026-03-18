#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;

    int arr[10][10];

    // input
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    int top = 0, bottom = M - 1;
    int left = 0, right = N - 1;

    while (top <= bottom && left <= right)
    {

        // 1. left column (top → bottom)
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][left] << ", ";
        }
        left++;

        // 2. bottom row (left → right)
        for (int j = left; j <= right; j++)
        {
            cout << arr[bottom][j] << ", ";
        }
        bottom--;

        // 3. right column (bottom → top)
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][right] << ", ";
            }
            right--;
        }

        // 4. top row (right → left)
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                cout << arr[top][j] << ", ";
            }
            top++;
        }
    }

    cout << "END";
    return 0;
}