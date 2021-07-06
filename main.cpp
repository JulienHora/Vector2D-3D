#include "iostream"

// #include "Vector2D.h"
#include "Vector3D.h"

int main()
{
    Vector3D VectorA(33, 55, -47);
    Vector3D VectorB(-212, -16, 94);
    
    VectorA.SplitToStruct();

    Vector3D VectorC = VectorA.CrossProduct(VectorB);

    double DProduct = VectorA.DotProduct(VectorC);

    std::cout << VectorC.x << std::endl;
    std::cout << VectorC.y << std::endl;
    std::cout << VectorC.z << std::endl;

    std::cout << DProduct << std::endl;
    return 0;
}
