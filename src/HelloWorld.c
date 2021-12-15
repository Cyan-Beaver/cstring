#include <cstring/strlen.h>
#include <stdio.h>
#include <cstring/strcat.h>

int main(){

	char array[100];

	mstrcat("hello", " world", array);

	printf(array);

	printf("%llu\n", mstrlen("hello"));

	return 0;
}