#include <stdio.h>

int main(void)
{
	char ch[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	
	int i, j;
	for(j = 0; j < 10; j++){
		for(i = 0; i < 26; i++){
			putchar(ch[i]);
		}
		putchar('\n');		
		
	}

	return (0);
}
