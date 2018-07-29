#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int volatile count;

void handler(int sig,siginfo_t *siginfo,void *context){
  printf("Yahho I cought %d it hurts baby\n",sig );
  // printf("your UID is %d\n",*siginfo −> si_uid);
  // printf("your PID is %d\n",siginfo −> si_pid);
  count++;
}

int main(void) {
  struct sigaction sa;
  int pid = getpid();
  printf("try killing me %d\n",pid );
  sa.sa_sigaction = handler;
  sa.sa_flags = SA_SIGINFO ;
  sigemptyset(&sa.sa_mask);

  if(sigaction(SIGINT,&sa,NULL)!=0 ) {
    return(1);
  }
  while(count!=4){
    // printf("Chnace left %d\n",count);
  }
  printf("I ’ ve had enough ! \n ") ;
  return 0;
}
