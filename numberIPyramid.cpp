#include <iostream>
using namespace std;
int main()
{
    int i, j, x = 1;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << x;
            ++x;
        }
        cout << endl;
    }
    return 0;
}