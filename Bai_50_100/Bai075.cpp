#include <iostream>
using namespace std;
int main()
{
    float x;
    int n;
    cin >> x >> n;
    float s = 1;
    float t = 1;
    int m = 1;
    int i = 2;
    while (i <= 2 * n)
    {
        m = m * i * (i - 1);
        t = t * x * x;
        s = s + t / m;
        i = i + 2;
    }
    cout << s;
    return 0;
}