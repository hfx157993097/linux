#include "uhead.h"
#include "bsort.h"
int main()
{
	int a[NUM];
	urand(a, NUM);
	ushow(a, NUM);
	printf("sum=%d\n****************\n", usum(a, NUM));
	qsort(a, NUM, 4, compare1);
	bsort(a, NUM, 4, compare2);
	syssort(a, NUM, 4, compare1, bsort);
	ushow(a, NUM);
}
