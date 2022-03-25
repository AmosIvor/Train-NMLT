#include <iostream>
using namespace std;
int main()
{
    float x;
    int n;
    cin >> x >> n;
    float s = 0;
    float t = 1;
    int m = 0;
    int i = 1;
    while (i <= n)
    {
        m = m + i;
        t = t * x;
        s = s + t / m;
        i = i + 1;
    }
    cout << s;
    return 0;
}