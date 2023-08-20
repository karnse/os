#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int grobal1 = 5;
int grobal2;
int grobal3 = 10;
int grobal4;
int count = 0;
void test()
{
    int* a = (int*)malloc(sizeof(int)*100);
    if(count==10)
        return 0;
    int x;
    printf("&a%d=%p\n",count,&a);
    printf("a%d=%p\n",count,a);
    printf("x%d=%p\n",count,&x);
    count++;
    test();
    free(a);
    return 0;
}
int main()
{
    printf("grobal1=%p\n",&grobal1);
    printf("grobal2=%p\n",&grobal2);
    printf("grobal3=%p\n",&grobal3);
    printf("grobal4=%p\n",&grobal4);
    int x2;
    printf("%p\n",&x2);
    test();
    return 0;
}