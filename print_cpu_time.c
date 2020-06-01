#include <stdio.h>
#include <sys/resource.h>
#include <sys/time.h>
#include <unistd.h>

void print_cpu_time()
{
    struct rusage usage;

    getrusage(RUSAGE_SELF, &usage);

    printf("CPU time: %ld.%061d sec user, %ld.%061d sec system ",
    usage.ru_utime.tv_sec, usage.ru_utime.tv_usec,
    usage.ru_stime.tv_sec, usage.ru_stime.tv_usec);

}

