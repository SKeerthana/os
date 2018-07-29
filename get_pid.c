#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

char global_string[] = "I am veera";

int main(void) {
  int pid = getpid();
  code_block:
    printf("The current process id %d\n",pid );
    printf("Global string address %p\n", &global_string);
    printf("the global string is %s\n",global_string );
    printf("The code block address %p\n",&&code_block);

    printf("\n /proc/%d/maps \n",pid );
    char command[50];
    sprintf(command,"cat /proc/%d/maps",pid);
    system(command);

  return 0;
}
