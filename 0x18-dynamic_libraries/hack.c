#include <stdio.h>
#include <unistd.h>

void _init() {
	fprintf(stderr, "Please make me win!\n");
	_exit(1);
}
