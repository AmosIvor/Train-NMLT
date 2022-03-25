#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int at = 2;
    int i = 2;
    float ahh;
    while (i <= n)
    {
        ahh = (float)(at * at + 2) / (2 * at);
        at = ahh;
        i = i + 1;
    }
    cout << ahh;
    return 0;
}