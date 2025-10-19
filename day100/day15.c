#include <stdio.h>
int main ()
{
    int n, i;
    printf("enter no :");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)

    {
        int fac=1;
        fac *= i;
    }
    printf("factorial of n is\n",n, fac(n));

    return 0;
}