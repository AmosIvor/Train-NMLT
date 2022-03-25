#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 0;
    int t = n;
    while (t != 0)
    {
        c = c + 1;
        t = t / 10;
    }
    cout << c;
    return 0;
}