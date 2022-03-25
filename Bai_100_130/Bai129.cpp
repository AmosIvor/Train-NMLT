#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        swap(a, b);
    }
    else if (a > c)
    {
        swap(a, c);
    }
    else
    {
        swap(b, c);
    }
    cout << a << b << c;
    return 0;
}
