#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x;
    cin >> x;
    x = (x * 3.14) / 180;
    float t = 1;
    float s = 1;
    int dau = -1;
    float e = 1;
    int m = 1;
    int i = 2;
    while (e >= pow(10, -6))
    {
        m = m * i * (i - 1);
        t = t * x * x;
        e = t / m;
        s = s + e * dau;
        dau = -dau;
        i = i + 2;
    }
    cout << s;
    return 0;
}