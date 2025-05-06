#include <stdio.h>
void answers(int num, int *result1, int *result2, int *result3);
int main()
{
    int n;
    printf("Enter the total number positive integers in the list: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        int num, result1, result2, result3;
        printf("Enter the number: ");
        scanf("%d", &num);
        answers(num, &result1, &result2, &result3);
        if (result1 == 1)
            printf("%d is a multiple of  7, 11, or 13", num);
        else
            printf("%d is not a multiple of 7, 11, or 13", num);
        if (result2 == 1)
            printf("sum of the digits of %d even", num);
        else
            printf("sum of the digits of %d odd", num);
        if (result3 == 0)
            printf("%d is a prime number", num);
        else
            printf("%d is not a prime number", num);
    }
    return 0;
}
void answers(int num, int *result1, int *result2, int *result3)
{
    if (num % 7 == 0 || num % 11 == 0 || num % 13 == 0)
        *result1 = 1;
    int s = 0;
    while (num > 0)
    {
        s += num % 10;
        num / 10;
    }
    if (s % 2 == 0)
        *result2 = 1;
    if (num == 0 || num == 1)
        *result3 = 1;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            *result3 = 1;
            break;
        }
    }
}