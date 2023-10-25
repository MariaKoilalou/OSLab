#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>

int main() {

	int fd = open("secret_number",O_CREAT,S_IRWXU);
	char c[1];

	while(1) {
		read(fd,c,1);
		write(1,c,1);
	}

	close(fd);
	return 0;

}
