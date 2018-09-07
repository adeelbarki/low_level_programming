#include <stdio.h>

int main(void)
{

	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	*(p + 5) = 98;
	/* printf for my own understanding*/	
	printf("&a[0] = %p\n", &a[0]);
	printf("&a[1] = %p\n", &a[1]);
	printf("&a[2] = %p\n", &a[2]);
	printf("&a[3] = %p\n", &a[3]);
	printf("&a[4] = %p\n", &a[4]);
		
	printf("n = %p\n", &n);
	printf("p = %p\n", p);
	printf("p + 1 = %p\n", (p+1));
	printf("p + 2 = %p\n", (p+2));
	printf("p + 3 = %p\n", (p+3));
	printf("p + 4 = %p\n", (p+4));
	printf("p + 5 = %p\n", (p+5));
	/*--------------------------------*/
	
	printf("a[2] = %d\n", a[2]);
	return(0);
}
