#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 5; i > 0; i--)
    {
        for (j = 1; j <= 10; j++)
        {
            if (j < i || j > (i + 5))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}