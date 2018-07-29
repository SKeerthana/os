#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void) {
  int pid = fork();

  if(pid==0){
    return 42;
  }else{
  int res;
  wait(&res);
  printf("the result was %d\n",WEXITSTATUS(res));
}
  return 0;
}
