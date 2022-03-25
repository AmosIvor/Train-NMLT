#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t2 = 1;
    int i = 0;
    while (i <= n)
    {
        t2 = t2 * 2;
        cout << t2 << " ";
        i = i + 1;
    }
    return 0;
}