#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	return (a+b);	
}

int square(int n)
{
	return(n*n);
}

int get_max(int x, int y)
{		
	if(x > y)
		return x;
	else
		return y;
}

int main(int argc, char *argv[])
{
	ptintf("sumTwo : %i\n", sumTwo(1,2));
	ptintf("square : %i\n", square(5));
	ptintf("get_max : %i\n", get_max(10, 30));

	return 0;
}
