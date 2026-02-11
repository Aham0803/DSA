// #include<iostream>
// using namespace std;

// void greet(){
//     cout<<"hello"<<endl;

// }

// void great (string name){
//   cout<<"hello "<<name << endl;
// }
// // no argument and return
// int subtract(){
//     int a = 5;
//     int b = 3;
//     int c = a-b;
//     return c;
// }
// // argument and return
// int add()
// int main(){

// return 0;
// }

// * * * * *
// * # # # *
// * # @ # *
// * # # # *
// * * * * *

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int m;
//     m = (n + 1) / 2;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == 1 || i == n || j == 1 || j == n)
//             {
//                 cout << "*\t";
//             }
//             else if (i == m && j == m)
//             {
//                 cout << "@\t";
//             }
//             else
//             {
//                 cout << "#\t";
//             }
//         }

//         cout << endl;
//     }
//     return 0;
// }

// 2 3 5 7 11
//   13  17
//     19
//   13  17
// 2 3 5 7 11

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int num;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i - 1; j++)
//         {
//             cout << "_";
//         }

//     }
//     return 0;
// }

//      1
//     1 1
//    2   2
//   3     3
//    2   2
//     1 1
//      1

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
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}