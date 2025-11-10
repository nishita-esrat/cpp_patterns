
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "number pattern" << endl;
    cout << "enter number :" << endl;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {

        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }

        cout << endl;
    }
}
