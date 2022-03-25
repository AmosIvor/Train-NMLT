#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float s = 0;
    int i = 1;
    while (i <= n)
    {
        s = pow(s + i, i + 1);
        i = i + 1;
    }
    cout << s;
    return 0;
}