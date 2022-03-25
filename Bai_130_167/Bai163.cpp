#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int maxDivisor = 0;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0 && i % 2 == 1)
        {
            if (i > maxDivisor)
                maxDivisor = i;
        }
        i = i + 1;
    }
    cout << maxDivisor;
    return 0;
}