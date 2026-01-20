#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 300 and n <= 460)
    {
        cout << " you won a MacBook" << endl;
        if (n >= 300 and n <= 380)
        {
            cout << "Model: M1 Mac" << endl;
        }
        else
        {
            cout << "Model: M2 Mac" << endl;
        }

        else if (n > 200 and n <= 280)
        {
            cout << "You won a pack of Kurkure!" << endl;
        }

        else if (n >= 1100 and n <= 1500)
        {
            cout << "You won a Cycle!" << endl;
            else if (n >= 200 and n <= 240)
            {
                cout << "Flavor : Chilli Kurkure";
            }
            else if (n >= 241 and n <= 280)
            {
                cout << "Flavor : Onion Kurkure";
            }
        }
        else if (n >= 1100 and n <= 1300)
        {
            cout << "Brand: Avon Cycle";
        }
        else if (n >= 1301 and n <= 1500)
        {
            cout << "Brand : Hero Cycle";
        }
        else if (n > 50 and n <= 80)
        {
            cout << "You won a Bike";
        }
        else if (n > 50 and n <= 65)
        {
            cout << "Model:Bullet";
        }
        else if (n > 65 and n <= 80)
        {
            cout << "Model:Rajdoor";
        }
        else cout << "Better luck next time";
    }