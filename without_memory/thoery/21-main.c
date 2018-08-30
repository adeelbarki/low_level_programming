#include <stdio.h>

int main(void)
{

	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;

	
	printf("Address of *a : %p\nValue of *a: %d\n", &(*a), *a);
	printf("Address of *(a + 1) : %p\nValue of *(a + 1): %d\n", &(*(a + 1)), *(a + 1));
	printf("Address of *(a + 2) : %p\nValue of *(a + 2): %d\n", &(*(a + 2)), *(a + 2));
	printf("Address of a[3] : %p\nValue of a[3]: %d\n", &a[3], a[3]);
	printf("Address of *(a + 4) : %p\nValue of *(a + 4): %d\n", &(*(a + 4)), *(a + 4));
	printf("---------------------------------------------------------------------\n");
		
	p = a + 1;
	*p = 98;
	p2 = a + 3;
	printf("Address of p: %p\nValue of p: %d\n", &p, *p);
	printf("Address of p2: %p\nValue of p2: %d\n", &p2, *p2);
	
	*p2 = *p + 1337; 
	printf("---------------------------------------------------------------------\n");
	printf("Address of p: %p\nValue of p: %d\n", &p2, *p2);
	
	return (0);
}
