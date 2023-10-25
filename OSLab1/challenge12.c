#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>

int main(int argc, char** argv) {

        int fd = open(argv[1],O_RDWR,S_IRWXU); 
        char *c = mmap(NULL,4096,PROT_READ | PROT_WRITE, MAP_SHARED,fd,0);

        c[111]=argv[2][0];

        return 0;
}
