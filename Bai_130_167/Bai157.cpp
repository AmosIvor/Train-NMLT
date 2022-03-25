#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    float s = 0;
    while (i <= n)
    {
        s = s + (float)1 / i;
        cout << s << " ";
        i = i + 1;
    }
    return 0;
}