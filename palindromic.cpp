#include <iostream>
using namespace std;
int main()
{
    int i, j, x, y;
    for (i = 0; i < 5; i++)
    {
        x = i + 1;
        y = 2;
        for (j = 0; j < 9; j++)
        {
            if (j < (4 - i) || j > 4 + i)
            {
                cout << "*";
            }
            else if (j == 4)
            {
                cout << 1;
            }
            else if (j >= (4 - i) && j < 4)
            {
                cout << x;
                --x;
            }
            else if (j <= 4 + i && j > 4)
            {
                cout << y;
                ++y;
            }
        }
        cout << "\n";
    }
    return 0;
}