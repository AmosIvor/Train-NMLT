#include <iostream>
using namespace std;
int main()
{
    float x;
    int n;
    cin >> x >> n;
    float s = -x;
    float t = x;
    int m = 1;
    int i = 2;
    int dau = 1;
    while (i <= n)
    {
        t = t * x;
        m = m + i;
        s = s + dau * t / m;
        i = i + 1;
        dau = -dau;
    }
    cout << s;
    return 0;
}