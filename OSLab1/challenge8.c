#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char** argv) {

	int fd[10];
	extern char** environ;

	for(int i=0; i<10; i++) {
		char filename[] = "bf0";
		char num[]="0";
		sprintf(num,"%d",i);
		strcat(filename,num);
		fd[i] = open(filename, O_CREAT | O_RDWR, S_IRWXU);
        	lseek(fd[i], 1073741824, SEEK_SET);
        	write(fd[i],"X",16);

	}
	execve(argv[1],argv,environ);
	
	return 0;
}
	
