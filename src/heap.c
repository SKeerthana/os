#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
    int pid = getpid();
    char *heap = malloc(20);

    printf("The heap variable at %p\n",&heap);
    printf("And it is pointing to %p\n",heap);


    printf("\n /proc/%d/maps \n",pid );
    char command[50];
    sprintf(command,"cat /proc/%d/maps",pid);
    system(command);

  return 0;
}
