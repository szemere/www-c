#include <stdio.h>

int myglobal = 0;

int fizzbuzz(int number)
{
    int return_value = 0;

    if (number % 15 == 0)
    {
        printf("FizzBuzz\n");
    }
    else if (number % 3 == 0)
    {
        printf("Fizz\n");
        return_value = number;
    }
    else if (number % 5 == 0)
    {
        printf("Buzz\n");
        return_value = number;
    }
    else
    {
        printf("%d\n", number);
        return_value = number;
    }

    return return_value;
}

void foo(void)
{
    int max = 20;
    printf("I will run FizzBuzz until: %d\n\n", max);

    for (int i = 1; i<20; i++)
    {
        myglobal = fizzbuzz(i);
        if (73 % myglobal == 0 )
        {
            printf("Heureka! 73!\n");
        }
    }
}

int main(void)
{
    printf("Hello in the FizzBuzz program.\n");
    foo();
}
