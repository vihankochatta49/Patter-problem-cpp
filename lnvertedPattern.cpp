#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 5; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            int x = j + 1;
            cout << x;
        }
        cout << endl;
    }
    return 0;
}