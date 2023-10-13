#include <math.h>
int QuadraticEquation(double a, double b, double c)
{
    double D, sum, x1, x2, k;
    D = b*b-4*a*c;
    if (D >= 0)
    {
        x1 = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);
        return x1 + x2;
    }
    else 
    {
        D = sqrt(-D);
        k = -b/(2*a);
        return 2 * k; 
    }
}