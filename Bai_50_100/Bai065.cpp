#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int lc = 10;
    int t = n;
    int dv;
    while (t != 0)
    {
        dv = t % 10;
        if (lc > dv)
            lc = dv;
        t = t / 10;
    }
    cout << lc;
    return 0;
}