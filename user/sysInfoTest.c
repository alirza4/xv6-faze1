#include "kernel/types.h"
#include "user/user.h"
#include "kernel/sysinfo.h"


int main(void)
{
 struct sysinfo info;
 
    sysinfo(&info);
    printf("Seconds since boot(uptime): %d\n", info.uptime);
    printf("Total usable main memory size(totalram): %d B\n", info.totalram);
    printf("Available memory size(freeram): %d B\n", info.freeram);
    printf("Number of current processes(procs): %d\n", info.procs);
    exit(0);
}