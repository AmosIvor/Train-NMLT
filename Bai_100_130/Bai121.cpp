#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int att = -1;
    int at = 1;
    int i = 2;
    int ahh;
    while (i <= n)
    {
        ahh = at + att;
        i = i + 1;
        att = at;
        at = ahh;
    }
    cout << ahh;
    return 0;
}