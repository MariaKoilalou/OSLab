#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char** argv) {

	int fd = open("file", O_CREAT | O_WRONLY);
	dup2(fd,99);
	close(fd);
	extern char** environ;
	execve(argv[1],argv,environ);
	
	return 0;
}
