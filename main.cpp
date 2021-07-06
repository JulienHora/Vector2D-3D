#include "iostream"

// #include "Vector2D.h"
#include "Vector3D.h"

int main()
{
    Vector3D Test(12,3,4);
    Vector3D Operand(26,1,89);
    
    Test.SplitToStruct();

    Test = Test.CrossProduct(Operand);

    std::cout << Test.x << std::endl;
    std::cout << Test.y << std::endl;
    std::cout << Test.z << std::endl;
    return 0;
}
