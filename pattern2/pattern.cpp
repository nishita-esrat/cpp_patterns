
#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cout << "triangle pattern " << endl;

    cout << "enter number : " << endl;

    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        /* print space */

        for (int col = 0; col <= n - row; col++)
        {
            cout << " ";
        }

        /* print (*) */

        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}