#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void){

    printf("pid actual: %d\n",getpid());
    printf("pid padre: %d\n",getppid());
    return 0;
}