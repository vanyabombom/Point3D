#include <iostream>
#include "Point3D.h"

using namespace std;

int main()
{
    Point3D point1(1, 2, 3);
    Point3D::GetCount();

    Point3D point2(4, 5, 6);
    Point3D::GetCount();

    Point3D point3 = point1.Sum(point2);
    point3.Show();
    Point3D::GetCount();

    return 0;
}