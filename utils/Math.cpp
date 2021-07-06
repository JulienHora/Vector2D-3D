#include "Math.h"

float Clamp(float Number, float Min, float Max) 
{   
    return std::max(Min, std::min(Number, Max));  
}

double Clamp(double Number, double Min, double Max) 
{   
    return std::max(Min, std::min(Number, Max)); 
}

int Clamp(int Number, int Min, int Max) 
{   
    return std::max(Min, std::min(Number, Max));  
}