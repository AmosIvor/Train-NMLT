#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int c2 = 1;
    if (n == 1)
        cout << 0;
    else
    {
        while (c2 < n)
        {
            c2 = c2 * 2;
            i = i + 1;
        }
        cout << i - 1;
    }
    return 0;
}