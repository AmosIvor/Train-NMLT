#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int att = -1;
    int at = 3;
    int t = 2;
    int i = 2;
    int ahh;
    while (i <= n)
    {
        t = t * 2;
        ahh = 5 * t + 5 * at - att;
        i = i + 1;
        att = at;
        at = ahh;
    }
    cout << ahh;
    return 0;
}