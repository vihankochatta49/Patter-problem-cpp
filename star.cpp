#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (i < 5)
            {

                if (j < (3 - i) || j > 3 + i)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            else
            {
                if (j > (10 - i) || j < (i - 4))
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}