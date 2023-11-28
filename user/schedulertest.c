#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fcntl.h"
#include <stdarg.h>



#define NFORK 10


int main() {
  int n, pid;
  fprintf(1,"inicio prueba\n");
  for(n=0; n < NFORK;n++) {
      pid = fork();
      if (pid < 0)
          break;
      if (pid == 0) {
      int pid = getpid();
      printf("%d\n", pid);
        
    set_priority(80, pid); 

    
      }}

      

  exit(0);
}