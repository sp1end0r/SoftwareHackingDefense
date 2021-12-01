#include <stdio.h>

int main(){
	char input[32];
	char scret[32] = "This is key strings";

	printf("input your string: ");
	scanf("%s", input);
	printf("input data = %s\n", input);
	printf("scret data = %s\n", scret);

	return 0;
}
