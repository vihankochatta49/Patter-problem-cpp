#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 12; j++)
        {
            if (j < 2 - i || j > 6 + i)
            {
                cout << " ";
            }
            else if (j == 2 - i || j == 6 + i)
            {
                cout << "*";
            }
            else if (j > 2 - i || j < 6 + i)
            {
                if (i == 0)
                {
                    cout << " ";
                }
                else if (i > 0)
                {
                    if (j == i + 2 || j == 6 - i)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}