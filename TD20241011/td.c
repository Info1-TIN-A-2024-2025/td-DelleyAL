#include <stdio.h>
#include <limits.h>
#include <float.h>


int main(int argc, const char *argv[])
{
	//definition des valeurs min max des type de variables
	printf("Valeur min max de char      : %d  ... %d\n", CHAR_MIN, CHAR_MAX);
	printf("Valeur min max de short     : %d  ... %d\n", SHRT_MIN, SHRT_MAX);
	printf("Valeur min max de float     : %e  ... %e\n", FLT_MIN, FLT_MAX);
	printf("Valeur min max d'un double  : %e  ... %e\n", DBL_MIN, DBL_MAX);
	printf("\n");
	printf("\n");

	float x = 1e-40;
	printf("la valeur de x est  %f\n", x);// 6 décimale
	printf("la valeur de x est  %.50f\n", x);//50 décimale
	printf("\n");
	double y = 1e-40;
	printf("la valeur de y est  %.50lf\n", y);// 50 décimale
	printf("\n");
#if 0
	int d = 42;
	int r = d / 0;
	printf("r = %d\n", r);
#endif

	printf("\n");
	double t = 42;
	double z = t / 0.0;
	printf("r = %lf\n", z);

	printf("\n");
	const double c = 299792458.0;// [m/s]
	const double conv = 2.23694; // facteur de conversion pour [m/s] en [mph]
	printf("la vitesse de la lumieère en mph est de : %.1lf\n", c * conv);
	// c = c/2 ;  // n'est pas possible car c est une constante
	return 0;
}