#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int grobal1;
int grobal2 = 10;
int grobal3;
int grobal4 = 1;
int count;
void test()
{
    if(count == 10)
        return 0;
    int local = 10;
    printf("stack %d = %p\n",count,&local);
    int *heap = (int*)malloc(sizeof(int));
    printf("heap %d = %p\n",count,heap);
    printf("stack2 %d = %p\n",count++,&heap);
    test();
    free(heap);
}
int main()
{
    printf("grobal1 = %p\n",&grobal1);
    printf("grobal2 = %p\n",&grobal2);
    printf("grobal3 = %p\n",&grobal3);
    printf("grobal4 = %p\n",&grobal4);
    int *heap1 = (int*)malloc(sizeof(int));
    printf("heap1 = %p\n",heap1);
    int *heap2 = (int*)malloc(sizeof(int));
    printf("heap2 = %p\n",heap2);
    int *heap3 = (int*)malloc(sizeof(int));
    printf("heap3 = %p\n",heap3);
    test();
    free(heap1);
    free(heap2);
    free(heap3);
    return 0;
}