#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if ((x * x + y * y == z * z) || (x * x + z * z == y * y) || (y * y + z * z == x * x))
        cout << "La Tam Giac Vuong";
    else
        cout << "Khong la Tam Giac Vuong";
    return 0;
}