#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	char* input = (char*)malloc(sizeof (char) * 50 );
	printf("Welcome to the GDB Tutorial\n");
	printf("What would you like me to do?\n");
	printf("Options:\n");
	printf("\t1. Print Hello World\n");
	printf("\t2. Print Goodbye World\n");
	printf("\t3. Print None of the above\n");
	printf("Input:\n");
	input = fgets(input, sizeof(input), stdin);
	switch(atoi(input)){
		case 1:
			printf("Hello World!\n");
			break;
		case 2:
			printf("Goodbye World!\n");
			break;
		case 3:
			printf("None of the Above\n");
			break;
		default:
			printf("L.O.L. You thought.\n");
			break;
	}
}
