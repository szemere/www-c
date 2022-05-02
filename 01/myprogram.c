#include <stdio.h>

void myfunc(int number)
{
    printf(" %d ", number);
}

int main(void)
{
    printf("Hello");
    myfunc(42);
    printf("World!\n");
}
