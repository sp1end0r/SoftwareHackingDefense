#include <unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
  
int main()
{
	char *input = malloc(10);
	char *scret = malloc(10);

	printf("input your string :");

	read(0, input, 100); // Heap buffer overflow
	printf("input data = %s\n", input);
	printf("scret data = %s\n", scret);

	return 0;
}
