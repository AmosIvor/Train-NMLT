#include <iostream>
using namespace std;
int main()
{
    float x;
    int n;
    cin >> x >> n;
    float s = 1 / x;
    float t = x;
    int i = 1;
    while (i <= n)
    {
        t = t * (t + i);
        s = s + (float)1 / t;
        i = i + 1;
    }
    cout << s;
    return 0;
}