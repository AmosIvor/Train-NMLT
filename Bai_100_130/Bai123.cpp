#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int at = 2;
    int bt = 1;
    int i = 2;
    int ahh, bhh;
    while (i <= n)
    {
        ahh = 3 * bt + 2 * at;
        bhh = at + 3 * bt;
        at = ahh;
        bt = bhh;
        i = i + 1;
    }
    cout << ahh << bhh;
    return 0;
}