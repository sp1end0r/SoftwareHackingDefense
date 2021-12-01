#include <stdio.h>
#include <unistd.h>

int main(){
	char input[32];
	char scret[32] = "This is key strings";

	printf("input your string: ");
	read(0, input, 100);
	printf("input data = %s\n", input);
	printf("scret data = %s\n", scret);

	return 0;
}
