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
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for (int j = 1 ; j<= n-i ; j++){
            cout << "  ";
        }
        for(int j = n-i ; j<=n ; j++){
            cout << j%10 << " ";
        }

         for(int j = n-1 ; j>=n-i ; j--){
            cout << j%10 << " ";
        }

        cout << endl;
    }
    
return 0;
}