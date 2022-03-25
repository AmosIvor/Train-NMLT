#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int at = 2;
    int i = 2;
    int ahh;
    while (i <= n)
    {
        ahh = at + 2 * i + 1;
        i = i + 1;
        at = ahh;
    }
    cout << ahh;
    return 0;
}