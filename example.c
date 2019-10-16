#include <stdio.h>

int foo(int a)
{
	int x = 10;
	int y = 101;
	if(a>1)
	{
		x = 5;
	}
	else
	{
		y = 9;
	}
	return x+y;
		

}
int main()
{
	foo(123);
	return 0;
}
