

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "special patterns " << endl;

    cout << "enter number : " << endl;

    cin >> n;

    /* 1st part */

    for (int row = n; row >= 1; row--)
    {
        /* print (*) */

        for (int col = row; col >= 1; col--)
        {
            cout << "*";
        }

        /* print space */

        for (int col = 1; col <= 2 * (n - row); col++)
        {
            cout << " ";
        }

        /* print (*) */

        for (int col = row; col >= 1; col--)
        {
            cout << "*";
        }

        cout << endl;
    }

    /* 2nd part */

    for (int row = 1; row <= n; row++)
    {
        /* print (*) */

        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }

        /* print space */

        for (int col = 2 * (n - row); col >= 1; col--)
        {
            cout << " ";
        }

        /* print (*) */

        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}