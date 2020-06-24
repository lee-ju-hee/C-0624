#include <stdio.h>
int rec(int a)
{
	if(a==1)
		return 1;
	else
		return a*rec(a-1);
}

int main()
{
	int i=5;
	printf("%d\n", rec(i));
	
	return 0;
}
