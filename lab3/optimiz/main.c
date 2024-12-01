#include <stdio.h>
#include <stdlib.h>
#include <sys/times.h>
#include <unistd.h>

int getSign(long long pow)
{
    return pow % 2 == 0 ? 1 : -1;
}
long double findPi(long long N)
{
    long double result = 0.0;
    while (N >= 0)
    {
        result += (long double)(getSign(N) / (2.0 * N + 1.0));
        N--;
    }
    return result * 4.0;
}
int main(int argc, char *argv[])
{
    struct tms start, end;
    long clocks_per_sec = sysconf(_SC_CLK_TCK);
    long clocks;
    long long N = argc > 1 ? atoll(argv[1]) : 7500000000L;
    times(&start);
    long double PI = findPi(N);
    times(&end);
    clocks = end.tms_utime - start.tms_utime;
    printf("Result: %Lf, N = %lld, time = %lf sec\n", PI, N, (double)clocks / clocks_per_sec);
    return 0;
}