#include <iostream>
using namespace std;
int main()
{
    int i, j, x = 1;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i % 2 == 0 && j % 2 == 0)
            {
                cout << 1;
            }
            else if (i % 2 != 0 && j % 2 == 0)
            {
                cout << 0;
            }
            else if (i % 2 == 0 && j % 2 != 0)
            {
                cout << 0;
            }
            else if (i % 2 != 0 && j % 2 != 0)
            {
                cout << 1;
            }
        }
        cout << endl;
    }
    return 0;
}