#include<stdio.h>
#include<time.h>
int main()
{
    clock_t start_with_not_io, end_with_not_io;
    clock_t start_with_io, end_with_io;
    start_with_not_io = clock();
    for(int i = 0; i < 10000; i++)
    {
    }
    end_with_not_io = clock();
    printf("time loop 10000 times without io = %f\n",(double)(end_with_not_io - start_with_not_io)/CLOCKS_PER_SEC);
    start_with_io = clock();
    for(int i = 0; i < 10000; i++)
    {
        printf("");
    }
    end_with_io = clock();
    printf("time loop 10000 times with io = %f\n",(double)(end_with_io - start_with_io)/CLOCKS_PER_SEC);
    return 0;
}