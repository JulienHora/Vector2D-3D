#include "utils/Math.h"
#include <cmath>

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
        double DotProduct(Vector3D Operand);
        double Distance(Vector3D Operand);

        Vector3D operator + (Vector3D B);
        Vector3D operator - (Vector3D B);
        Vector3D operator * (Vector3D B);
        Vector3D operator / (Vector3D B);
        Vector3D operator + (double B);
        Vector3D operator - (double B);
        Vector3D operator * (double B);
        Vector3D operator / (double B);

        bool operator == (Vector3D B);
        bool operator != (Vector3D B);
};