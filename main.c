#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int combination(int n, int r)
{
	int n1, n2, n3;
	
	n1 = factorial(n);
	n2 = factorial(n-r);
	n3 = factorial(r);
	
	return (n1/(n2*n3));	// factorial �Լ��� ���� ���
}

int factorial (int n)
{
	int i;
	int res=1;
	
	for (i=1; i<=n; i++)	// i�� 1���� n���� 1�� ����
	{
		res = res * i;	// res�� i�� ���� 
	}
	
	return res;
}

int get_integer ()
{
	int x;
	printf("input an integer:");
	scanf("%i", &x);
	return x;
}

int main(int argc, char *argv[])
{
	int n, r, result;	// ���� ����
	n = get_integer();	// n �Է� 
	r = get_integer();	// r �Է� 
	result = combination(n,r);	// combination ���
	
	printf("combination result is %i\n", result);	// ��� �� ���
}
