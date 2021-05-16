#pragma once
#include <iostream>
#include <cmath>
#include <stdio.h>  
#include <conio.h>
#include <locale.h>
#include <math.h>
using namespace std;

inline void kvadrat(double a, double b, double c, double &x1, double &x2)
{
    if ((b * b - 4 * a * c) >= 0) //Если дискриминант больше или равен 0
    {
        x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
    }
    else
    {
        x1 = NULL;
        x2 = NULL;
    }
}

const double PI = 3.1415926535897932384626433832795;
using namespace std;

template <typename T> int sgn(T val) {
    return (T(0) < val) - (val < T(0));
}


inline void kubicheskie(double a, double b, double c, double d, double &x1, double &x2, double &x3)
{
 
    double Q, R, S, f, x2i, x3i;
    b = b / a; c = c / a; d = d / a;
    a = b; b = c; c = d;

    Q = (pow(a, 2) - 3 * b) / 9;
    R = (2 * pow(a, 3) - 9 * a * b + 27 * c) / 54;
    S = pow(Q, 3) - pow(R, 2);

    if (S > 0)
    {
        f = ((double)1 / 3) * acos((R / pow(pow(Q, (double)3), 0.5)));

        x1 = -2 * pow(Q, 0.5) * cos(f) - (a / 3);
        x2 = -2 * pow(Q, 0.5) * cos((3 * f + 2 * PI) / 3) - (a / 3);
        x3 = -2 * pow(Q, 0.5) * cos((3 * f - 2 * PI) / 3) - (a / 3);
    }

    if (S < 0)
    {
        if (Q > 0)
        {
            f = ((double)1 / 3) * acosh((abs(R) / pow(pow(Q, (double)3), 0.5)));

            x1 = (double)-2 * sgn(R) * pow(Q, 0.5) * cosh(f) - (a / 3);

            x2 = sgn(R) * pow(Q, 0.5) * cosh(f) - (a / 3);
            //x2i = pow((double)3, 0.5) * pow(Q, 0.5) * sinh(f);

            x3 = sgn(R) * pow(Q, 0.5) * cosh(f) - (a / 3);
           //x3i = pow((double)3, 0.5) * pow(Q, 0.5) * sinh(f);


        }

        if (Q < 0)
        {
            f = ((double)(1 / 3)) * asinh((abs(R) / pow(pow(abs(Q), (double)3), 0.5)));

            x1 = ((double)-2 * sgn(R) * pow(abs(Q), 0.5) * sinh(f)) - (a / 3);

            x2 = sgn(R) * pow(abs(Q), 0.5) * sinh(f) - (a / 3);
            //x2i = pow((double)3, 0.5) * pow(abs(Q), 0.5) * cosh(f);

            x3 = sgn(R) * pow(abs(Q), 0.5) * sinh(f) - (a / 3);
            //x3i = pow((double)3, 0.5) * pow(abs(Q), 0.5) * cosh(f);

        }

        if (Q == 0)
        {
            x1 = -(pow(c - (pow(a, 3) / 27), (double)1 / 3)) - (a / 3);

            x2 = -((a + x1) / 2);
            x2i = pow(abs((a - 3 * x1) * (a + x1) - 4 * b), 0.5);

            x3 = -((a + x1) / 2);
            x3i = pow(abs((a - 3 * x1) * (a + x1) - 4 * b), 0.5);

        }
    }

    if (S == 0)
    {
        x1 = (double)-2 * pow(R, (double)1 / 3) - (a / 3);

        x2 = pow(R, (double)1 / 3) - (a / 3);

    }
}