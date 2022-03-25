#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int s = 0;
    int i = 1;
    while (i <= n)
    {
        s = s + pow(i, k);
        i = i + 1;
    }
    cout << s;
    return 0;
}