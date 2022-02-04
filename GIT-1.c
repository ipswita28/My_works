#include <stdio.h>
#include<math.h>
double Def(double W, double L, double A, double X, double E, double I)
{
    double Y;
    if (0 <=X && X <= A)
    {
        Y = W * X * (L - A) * (L - (L - pow((L-A),2)) - X * X) / (6 * L * E * I);
    }
    else if (A < X && X <= L)
    {
        Y = (W * X * (L - A) * (L * L - pow((L-A),2)) - X * X) / (6 * E * L * I) + (W * pow((X - A), 3)) / (6 * E * I);
    }
    else
        return -1;
    return Y;
}
int main()
{
    double W, A, L, X, Y, E, I, D;
    printf("Enter Weight(kN):\n");
    scanf("%lf", &W);
    printf("Enter Length(m):\n");
    scanf("%lf", &L);
    printf("Enter A(m^2):\n");
    scanf("%lf", &A);
    printf("Enter the distance from End to be calculated(m):\n");
    scanf("%lf", &X);
    printf("Enter Modulus of Elasticity(MPa):\n");
    scanf("%lf", &E);
    printf("Enter Modulus of Rigidity(MPa):\n");
    scanf("%lf", &I);
    D = Def(W, L, A, X, E, I);
    printf("The deflection of Beam is : %f m", D);
    return 0;
}