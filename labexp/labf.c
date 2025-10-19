#include <stdio.h>
int main ()
{
    int n, i, num;
    printf("enter no");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            num++;
        }
    }
    if (num==2)
    
    printf("%d is prime no\n",n);
    else 
    printf ("%d in not a prime no",n);
     return 0;    

}
