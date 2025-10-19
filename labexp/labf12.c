#include <stdio.h>
int main()
{
    int n, i, num = 0, rem, rev = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // check prime
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            num++;
        }
    }

    if (num == 2)
        printf("%d is a Prime number\n", n);
    else
        printf("%d is Not a Prime number\n", n):

    // check palindrome
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
        printf("%d is a Palindrome number\n", temp);
    else
        printf("%d is Not a Palindrome number\n", temp);

    return 0;
}
