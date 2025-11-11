
#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "reverse triangle " << endl;

    cout << "enter number : " << endl;

    cin >> n;

    for (int row = 0; row < n; row++)
    {

        /* print space */

        for (int col = 1; col <= row; col++)
        {
            cout << " ";
        }

        /* print (*) */

        for (int col = 1; col <= 2 * (n - row) - 1; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}