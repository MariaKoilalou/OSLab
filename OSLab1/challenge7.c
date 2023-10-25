#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char** argv) {

	extern char** environ;
	int fd = open("bf00", O_RDONLY);

	off_t offset = lseek(fd,0,SEEK_END);

	close(fd);

	execve(argv[1],argv,environ);

	return 0;
}
	 
