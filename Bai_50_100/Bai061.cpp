#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 0;
    int t = n;
    int dv;
    while (t != 0)
    {
        dv = t % 10;
        if (dv % 2 == 1)
            c = c + 1;
        t = t / 10;
    }
    cout << c;
    return 0;
}