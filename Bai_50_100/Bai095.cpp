#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float s = 0;
    int i = n;
    while (i >= 1)
    {
        s = sqrt(s + i);
        i = i - 1;
    }
    cout << s;
    return 0;
}