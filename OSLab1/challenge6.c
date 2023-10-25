#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char** argv) {

	int childfd1[2], childfd2[2];
	extern char** environ;

	pipe(childfd1);
	dup2(childfd1[0],33);
	dup2(childfd1[1],34);

	pipe(childfd2);
	dup2(childfd2[0],53);
	dup2(childfd2[1],54);	

	execve(argv[1],argv,environ);	
	
	return 0;	
}

	

