#include <iostream>
using namespace std;
int main()
{
    int i, j, x;
    for (i = 0; i < 5; i++)
    {
        x = 1;
        for (j = 0; j < (9 - i); j++)
        {
            int y = (10 - (2 * i)) / 2;
            if (j < (y - 1) || j > ((9 - i) - y))
            {
                cout << " ";
            }
            else
            {
                cout << x << " ";
                ++x;
            }
        }
        cout << endl;
    }
    return 0;
}