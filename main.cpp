#include "iostream"

// #include "Vector2D.h"
#include "Vector3D.h"

int main()
{
    Vector3D VectorA(1, 2, -5);
    Vector3D VectorB(4, 6, 7);
    
    VectorA.SplitToStruct();

    Vector3D VectorC = VectorA.CrossProduct(VectorB);

    double DProductAC = VectorA.DotProduct(VectorC);
    double DProductBC = VectorB.DotProduct(VectorC);
    double DistanceAtoB = VectorA.Distance(VectorB);

    std::cout << "Cross Product of Vectors A & B: { x: " << VectorC.x << ", y: " << VectorC.y << ", z: " << VectorC.z << " }" << std::endl;
    std::cout << std::endl;

    std::cout << "Dot Product of Vectors A & C: " << DProductAC << std::endl;
    std::cout << "Dot Product of Vectors B & C: " << DProductBC << std::endl;
    std::cout << std::endl;

    std::cout << "Distance Between Vectors A & B: " << DistanceAtoB << std::endl;
    std::cout << std::endl;

    return 0;
}
