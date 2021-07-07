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

    Vector3D VectorAPlusB = VectorA + VectorB;
    Vector3D VectorAMinusB = VectorA - VectorB;
    Vector3D VectorAMultipliedByB = VectorA * VectorB;
    Vector3D VectorADividedByB = VectorA / VectorB;

    std::cout << "Cross Product of Vectors A & B: { x: " << VectorC.x << ", y: " << VectorC.y << ", z: " << VectorC.z << " }" << std::endl;
    std::cout << std::endl;

    std::cout << "Dot Product of Vectors A & C: " << DProductAC << std::endl;
    std::cout << "Dot Product of Vectors B & C: " << DProductBC << std::endl;
    std::cout << std::endl;

    std::cout << "Distance Between Vectors A & B: " << DistanceAtoB << std::endl;
    std::cout << std::endl;

    std::cout << "Vector A + B value: { x: " << VectorAPlusB.x << ", y: " << VectorAPlusB.y << ", z: " << VectorAPlusB.z << " }" << std::endl;
    std::cout << "Vector A - B value: { x: " << VectorAMinusB.x << ", y: " << VectorAMinusB.y << ", z: " << VectorAMinusB.z << " }" << std::endl;
    std::cout << "Vector A * B value: { x: " << VectorAMultipliedByB.x << ", y: " << VectorAMultipliedByB.y << ", z: " << VectorAMultipliedByB.z << " }" << std::endl;
    std::cout << "Vector A / B value: { x: " << VectorADividedByB.x << ", y: " << VectorADividedByB.y << ", z: " << VectorADividedByB.z << " }" << std::endl;
    std::cout << std::endl;

    return 0;
}
