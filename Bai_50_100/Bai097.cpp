#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x;
    int n;
    cin >> x >> n;
    float t = 1;
    float s = 0;
    int i = 1;
    while (i <= n)
    {
        t = t * x;
        s = sqrt(s + t);
        i = i + 1;
    }
    cout << s;
    return 0;
}