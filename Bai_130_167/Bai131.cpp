#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int xA, yA, xB, yB, xC, yC;
    cin >> xA >> yA >> xB >> yB >> xC >> yC;
    float dAB = sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
    float dBC = sqrt((xC - xB) * (xC - xB) + (yC - yB) * (yC - yB));
    float dAC = sqrt((xA - xC) * (xA - xC) + (yA - yC) * (yA - yC));
    if (((dAB < dBC + dAC) && (dBC < dAB + dAC) && (dAC < dAB + dBC)) || ((dAB < dBC + dAC) && dAB > abs(dBC - dAC)))
        cout << "La Tam Giac";
    else
        cout << "Khong la Tam Giac";
    return 0;
}
