#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>

int main() {

        int fd = open(".hello_there",O_RDWR);
	ftruncate(fd,32768); 
        
        return 0;
}

