#include <iostream>
using namespace std;
int main()
{
    int n;
    float x;
    cin >> x >> n;
    float s = 0;
    float t = 1;
    int i = 1;
    while (i <= n)
    {
        t = t * x;
        s = s + t;
        i = i + 1;
    }
    cout << s;
    return 0;
}