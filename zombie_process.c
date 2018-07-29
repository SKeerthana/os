#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void) {
  int pid = fork();
  if(pid == 0){
    printf("Check the status \n");
    sleep(10);
    printf("and again \n");
    return 42;
  } else{
    sleep(20);
    int res;
    wait(&res);
    printf("The result was %d\n", WEXITSTATUS(res) );
    printf("and again \n");
    sleep(10);
  }

  return 0;
}
