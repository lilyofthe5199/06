#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int combination(int n, int r)
{
	int n1, n2, n3;
	
	n1 = factorial(n);
	n2 = factorial(n-r);
	n3 = factorial(r);
	
	return (n1/(n2*n3));	// factorial 함수로 수식 계산
}

int factorial (int n)
{
	int i;
	int res=1;
	
	for (i=1; i<=n; i++)	// i는 1부터 n까지 1씩 증가
	{
		res = res * i;	// res에 i를 곱함 
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
	int n, r, result;	// 변수 선언
	n = get_integer();	// n 입력 
	r = get_integer();	// r 입력 
	result = combination(n,r);	// combination 계산
	
	printf("combination result is %i\n", result);	// 결과 값 출력
}
