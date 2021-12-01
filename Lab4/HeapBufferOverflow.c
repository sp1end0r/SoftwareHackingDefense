#include <unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
  
int main()
{
	char *input = malloc(16);
	char *scret = malloc(16);
	scret = "ThisIsScretValue";

	printf("input your string :");
	fflush(stdout);

	read(0, input, 100); // Heap buffer overflow
	printf("input data = %s\n", input);
	printf("scret data = %s\n", scret);

	return 0;
}
