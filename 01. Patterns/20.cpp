#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int space = 1;
        while (space <= (i - 1))
        {
            cout << " ";
            space++;
        }
        while (j <= (n - i + 1))
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}