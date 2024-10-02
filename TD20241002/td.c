#include <stdio.h>

int main(int argc, const char *argv[])
{
    double u = 0;
    double r = 0;
    double i = 0;


    printf("valeur de tension en [V]");
    scanf("%lf", &u);

    printf("Entrer la valeur de la résistance en [Ohm]");
    scanf("%lf", &r);

    if (r <= 0)
    {
        printf("Mauvaise valeur de R");
        return 1;
    }
    i = u / r;
    printf("La valeur du courant est %.10E [A]\n", i);

    return 0;
}