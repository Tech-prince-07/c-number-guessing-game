#include <stdio.h>
#include <string.h>

int sub(int, int);
int sum(int, int);
int mul(int, int);
int divide(int, int);

int sum(int x, int y)
{
    int sum;
    sum = x + y;
    printf("The sum of %d and %d is %d\n", x, y, sum);
    return sum;
};

int sub(int x, int y)
{
    int sub;
    sub = x - y;
    printf("The sub of %d and %d is %d\n", x, y, sub);
    return sub;
};

int mul(int x, int y)
{
    int mul;
    mul = x * y;
    printf("The mul of %d and %d is %d\n", x, y, mul);
    return mul;
};

int divide(int x, int y)
{

    int divide, rem;

    if (y == 0)
    {
        printf("second number should not be zero");
    }
    else
    {
        divide = x / y;
        rem = x % y;
        printf("The division of %d and %d is %d and remainder is : %d\n", x, y, divide, rem);
    }
    return divide;
};

int main()
{
    char is_matched[10];
    int number1, number2;
    printf("Which operation do you want to perform from these?\n");
    printf("Please type -> sum/sub/divide/mul: ");
    scanf("%s", is_matched);

    printf("Enter the first number : ");
    scanf("%d", &number1);
    printf("Enter the second number : ");
    scanf("%d", &number2);

    printf("\n");

    if (strcmp(is_matched, "sum") == 0)
    {
        sum(number1, number2);
    }
    else if (strcmp(is_matched, "sub") == 0)
    {
        sub(number1, number2);
    }
    else if (strcmp(is_matched, "mul") == 0)
    {
        mul(number1, number2);
    }
    else if (strcmp(is_matched, "divide") == 0)
    {
        divide(number1, number2);
    }
    else
    {
        printf("you enter invalid operation");
    }

    return 0;
}