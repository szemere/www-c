#include <stdio.h>

int fizzbuzz(int number)
{
    if (number % 15 == 0)
    {
        printf("FizzBuzz\n");
        return 0;
    }
    else if (number % 3 == 0)
    {
        printf("Fizz\n");
    }
    else if (number % 5 == 0)
    {
        printf("Buzz\n");
    }
    else
    {
        printf("%d\n", number);
    }
    return number;
}

int main(void)
{
    for (int i = 1; i<20; i++)
    {
        printf("%d\n", 42 / fizzbuzz(i));
    }
}
