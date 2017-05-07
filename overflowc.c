#include <stdio.h>


int main()
{
	int max, num1, num2, result;
	char op[1];
	
	scanf("%d", &max);
	scanf("%d %s %d",&num1, &op, &num2);


	if(op == "*")
	{
		result = num1 * num2;
	}
	else
	{
		result = num1 + num2;
	}

	if(result <= max)
		printf("OK\n");
	else
		printf("OVERFLOW\n");

	return 0;
}
