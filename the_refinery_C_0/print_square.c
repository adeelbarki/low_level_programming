#include "my_function.h"

void print_square(int n)
{
	int i, j;
		if(n > 1){
		print_char('o');
		for(i = 0; i < n - 2; i++){
			print_char('-');
		}
		print_char('o');
		print_char('\n');
	for(j = 0; j < n -2; j++){                           
		print_char('|');
		for(i = 0; i < n-2; i++){
			print_char(' ');
		}
		print_char('|');
		print_char('\n');
	}
		print_char('o');
		for(j = 0; j < n - 2; j++){
			print_char('-');
		}
		print_char('o');
		print_char('\n');
	}
	else if(n == 1){
		print_char('o');
		print_char('\n');
	}
}	 
