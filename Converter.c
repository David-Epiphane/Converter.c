#include"Metric.h"

int main()
{
    float mi, in, yd, lbs, oz;
    float gal, ft, dC, dF;

    printf("Please enter the number in meter:");
    scanf("%f", &m);

    m = in * 39.34;
    printf("%.2f meter = %.2f inche \n", m, in);
    
    printf("Please enter the number in kilogram:");
    scanf("%f", &kg);

    kg = lbs * 2.2;
    printf("%.2f kilogram = %.2f pound \n", kg, lbs);

    printf("Please enter the number in liter:");
    scanf("%f", &l);

    l = gal * 0.26;
    l = oz * 33.81;
    printf("%.2f liter = %.2f gallon \n", l, gal);
    printf("%.2f liter = %.2f ounce \n", l, oz);

    printf("please enter the temperature in Celsius:")
    scanf("%f", &dC);

    dF = (dC * 9/5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit \n", dC, dF);

    printf("Please enter the number in inche :");
    scanf("%f", &in);

    in = yd * 0.028;
    ft = yd * 0.33;
    printf("%.2f inches = %.2f yard \n", in, yd);
    printf("%.2f feet = %.2f yard \n", ft, yd);

    return 0;

}

