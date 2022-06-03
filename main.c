#include <stdio.h>
#include "Stack.h"

int main()
{
	printf("Enter the arithmetical expression: ");
	char str[1024];
	fgets(str, 1024, stdin);
	printf("%s", str);
	//Stack* equation = new_stack();
	
	
	return 0;	

}
