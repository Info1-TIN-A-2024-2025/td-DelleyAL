#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, const char *argv[])
{

	#if 0
	char s1 []= "poklopac mali";
	printf("%s\n", s1);
	printf("%lu\n", strlen(s1));
	printf("%ld\n", sizeof(s1));
	#endif

#if 0
	char name[100];

	printf("Enter your name : ");
	fgets(name, 100, stdin);
	printf("your name is : %s", name);
#endif

	char t1[][3] = { "ok", "no", "ah"};

	printf("%s\n", t1[0]);
	printf("%s\n", t1[1]);
	printf("%s\n", t1[2]);
	return 0;
}