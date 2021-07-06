#include "utils/Math.h"

struct Vector3DSplitted
{
        double x;
        double y;
        double z;
};

class Vector3D
{
    private:
        
    public:
        double x;
        double y;
        double z;

        Vector3D(double x, double y, double z);
        ~Vector3D();

        Vector3DSplitted SplitToStruct();
        Vector3D ClampToSize(double Min, double Max);
        Vector3D CrossProduct(Vector3D Operand);
};