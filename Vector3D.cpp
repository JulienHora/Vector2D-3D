#include "Vector3D.h"
#include "utils/Math.h"

Vector3D::Vector3D(double x, double y, double z)
{ this -> x = x; this -> y = y; this -> z = z; }

Vector3D::~Vector3D() { delete &x, &y, &z; }

Vector3DSplitted Vector3D::SplitToStruct()
{ Vector3DSplitted SplittedVector { this->x, this->y, this->z }; return SplittedVector; }

Vector3D Vector3D::ClampToSize(double Min, double Max)
{ Vector3D ClampedVector(Clamp(x, Min, Max), Clamp(y, Min, Max), Clamp(z, Min, Max)); return ClampedVector; }

Vector3D Vector3D::CrossProduct(Vector3D Operand)
{
    // xn = (ya * zb) - (yb * za)
    // yn = (xa * zb) - (xb * za)
    // zn = (xa * yb) - (xb * ya)
    // To be tested with a dot product = 0 ?
    Vector3D CrossProduct((y*Operand.z)-(Operand.y*z), -((x*Operand.z)-(Operand.x*z)), (x*Operand.y)-(Operand.x*y));
    return CrossProduct;
}

double Vector3D::DotProduct(Vector3D Operand)
{
    double DotProduct = (x*Operand.x)+(y*Operand.y)+(z*Operand.z);
    return DotProduct;
}

double Vector3D::Distance(Vector3D Operand)
{
    double Distance = std::sqrt(std::pow((Operand.x-x), 2) + std::pow((Operand.y-y), 2) + std::pow((Operand.z-z), 2));
    return Distance;
}