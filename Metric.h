#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float km, hm, dam, m, dm, cm, mm; 

    float kl, hl, dal, l, dl, cl, ml; 

    float kg, hg, dag, g, dg, cg, mg;

    printf("Please enter a number in meters:");
    
    scanf("%f", &km);

    km = m * 1000;
    hm = m * 100;
    dam = m * 10;
    dm = m * 0.1;
    cm = m * 0.01;
    mm = m * 0.001;


    printf("%.2f meters = %.2f kilometers \n", m, km);
    printf("%.2f meters = %.2f hectometers \n", m, hm);
    printf("%.2f meters = %.2f decameters \n", m, dam);
    printf("%.2f meters = %.2f decimeters \n", m, dm);
    printf("%.2f meters = %.2f centimeters \n", m, cm);
    printf("%.2f meters = %.2f millimeters \n", m, mm);

    printf("Please enter a number in liter:");
    
    scanf("%f", &l);

    kl = l * 1000;
    hl = l * 100;
    dal = l * 10;
    dl = l * 0.1;
    cl = l * 0.01;
    ml = l * 0.001;

    printf("%.2f liter = %.2f kiloliter \n", l, kl);
    printf("%.2f liter = %.2f hectoliter \n", l, hl);
    printf("%.2f liter = %.2f decaliter \n", l, dal);
    printf("%.2f liter = %.2f deciliter \n", l, dl);
    printf("%.2f liter = %.2f centiliter \n", l, cl);
    printf("%.2f liter = %.2f milliliter \n", l, ml);

    printf("Please enter a number in gram:");
    
    scanf("%f", &g);

    kg = g * 1000;
    hg = g * 100;
    dag = g * 10;
    dg = g * 0.1;
    cg = g * 0.01;
    mg = g * 0.001;
    
    printf("%.2f gram = %.2f kilogram \n", g, kg);
    printf("%.2f gram = %.2f hectogram \n", g, hg);
    printf("%.2f gram = %.2f decagram \n", g, dag);
    printf("%.2f gram = %.2f decigram \n", g, dg);
    printf("%.2f gram = %.2f centigram \n", g, cg);
    printf("%.2f gram = %.2f milligram \n", g, mg);


return 0;
}